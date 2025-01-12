#include "BitcoinExchange.hpp"

const std::multimap<std::string, std::string> &BitcoinExchange::getInput() const {
    return inputStr;
}

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

bool checkValidKey(std::string key) {
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
        if (std::getline(lineStream, key, sep[0]) && std::getline(lineStream, valueStr)) {
            if (skipe == true) {
                key = cleanSpace(key);
                valueStr = cleanSpace(valueStr);
            }
            inputStr.insert(std::make_pair(key, valueStr));
        } else {
            inputStr.insert(std::make_pair(line, ""));
        }
    }
    file.close();
    return true;
}

int convertDateToInt(const std::string &date) {
    std::string intDate = date;
    intDate.erase(std::remove(intDate.begin(), intDate.end(), '-'), intDate.end());
    return std::stoi(intDate);
}

bool checkClosest(const std::string &inputDate, std::map<std::string, std::string>::const_iterator previousIt, std::map<std::string, std::string>::const_iterator rateIt) {
    int inputDateInt = convertDateToInt(inputDate);
    int prevDateInt = convertDateToInt(previousIt->first);
    int nextDateInt = convertDateToInt(rateIt->first);
    
    int diffPrevious = std::abs(inputDateInt - prevDateInt);
    int diffNext = std::abs(nextDateInt - inputDateInt);
    if (diffPrevious <= diffNext) {
        return true;
    }
    return false;
}

void BitcoinExchange::findRate(BitcoinExchange input, BitcoinExchange bitex) {
     for (std::multimap<std::string, std::string>::const_iterator it = input.getInput().begin(); it != input.getInput().end(); ++it) {
        const std::string &inputDate = it->first;
        if (!checkValidKey(inputDate)) {
            std::cout << "Error: bad input => " << inputDate << std::endl;
            continue;
        }
        const std::string &inputValueStr = it->second;
        if (std::stod(inputValueStr) > std::numeric_limits<int>::max()) {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }
        
        float inputValue;
        try {
            inputValue = std::stof(inputValueStr);
        } catch (const std::invalid_argument &) {
            std::cerr << "Error: invalid number format => " << inputValueStr << std::endl;
            continue;
        } catch (const std::out_of_range &) {
            std::cerr << "Error: number out of range => " << inputValueStr << std::endl;
            continue;
        }
        if (inputValue < 0) {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }

        std::map<std::string, std::string>::const_iterator rateIt = bitex.getInput().lower_bound(inputDate);
        if (rateIt == bitex.getInput().end()) {
            --rateIt;
        } else if (rateIt->first != inputDate) {
            std::map<std::string, std::string>::const_iterator previousIt = rateIt;
            if(previousIt != bitex.getInput().begin())
                --previousIt;
            if (previousIt != bitex.getInput().end()) {
                if (checkClosest(inputDate, previousIt, rateIt)) {
                    rateIt = previousIt;
                }
            }
        }
        float rate;
        try {
            rate = std::stof(rateIt->second);
        } catch (const std::invalid_argument &) {
            std::cerr << "Error: invalid exchange rate for date => " << rateIt->first << std::endl;
            continue;
        } catch (const std::out_of_range &) {
            std::cerr << "Error: exchange rate out of range for date => " << rateIt->first << std::endl;
            continue;
        }
        std::cout << std::fixed << std::setprecision(2);
        std::cout << inputDate << " => " << inputValue  << " = " << inputValue * rate << std::endl;

    }
}