#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }
    BitcoinExchange bitex;
    bitex.loadCSV("data.csv", ",", false);

    BitcoinExchange input;
    input.loadCSV(argv[1], "|", true);


    for (std::map<std::string, float>::const_iterator it = input.getInput().begin(); it != input.getInput().end(); it++) {
        
        const std::string &inputDate = it->first;
        float inputValue = it->second;

        if (!input.checkValidKey(inputDate)) {
            std::cout << "Error: bad input => " << inputDate << std::endl;
            continue ;
        }
        if (inputValue < 0) {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        if (inputValue > std::numeric_limits<int>::max()) {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }

        std::map<std::string, float>::const_iterator rateIt = bitex.getInput().lower_bound(inputDate);
        if(rateIt == bitex.getInput().end() || rateIt->first != inputDate) {
            if (rateIt != bitex.getInput().begin()) {
                --rateIt;
            }
        }
        std::cout << std::fixed << std::setprecision(2);
        std::cout << inputDate << " => " << inputValue  << " = " << inputValue * rateIt->second << std::endl;
    }
    return 0;
}