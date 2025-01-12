#include "BitcoinExchange.hpp"

std::string cleanSpace(std::string key) {
    if (!key.empty()) {
        key.erase(0, key.find_first_not_of(" \t"));
        size_t lastPos = key.find_last_not_of(" \t");
        if (lastPos != std::string::npos) {
            key.erase(lastPos + 1);
        }
    }
    return key;
}

bool BitcoinExchange::checkValidKey(std::string key) {
    if (key.size() != 10 || key[4] != '-' || key[7] != '-') {
        return false;
    }
    int year = stof(key.substr(0, 4));
    int month = stof(key.substr(5, 2));
    int day = stof(key.substr(8, 2));
    if (year < 0)
        return false;
    if (month > 12 || month < 1)
        return false;
    if (month == 2) {
        bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (isLeapYear && day > 29) return false;
        if (!isLeapYear && day > 28) return false;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return false;
    }
    return true;
}

bool BitcoinExchange::loadCSV(const std::string& filename, std::string sep, bool skipe) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return false;
    }
    std::string line;
    if (!std::getline(file, line)) {
        std::cerr << "Error: file is empty." << std::endl;
        return false;
    }
    while (std::getline(file, line)) {
        std::stringstream lineStream(line);
        std::string key;
        std::string valueStr;
        float value;
        if(std::getline(lineStream, key, sep[0]) && std::getline(lineStream, valueStr)) {
            if (skipe == true) {
                key = cleanSpace(key);
                valueStr = cleanSpace(valueStr);
            }
            try {
                value = std::stof(valueStr);
                input[key] = value;
            } catch (const std::invalid_argument &e) {
                std::cerr << "Invalid value for key:"<< key << " | " << valueStr <<std::endl;
            }
        }
    }
    file.close();
    return true;
}

const std::map<std::string, float> &BitcoinExchange::getInput() const {
    return input;
}