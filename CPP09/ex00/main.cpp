#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }
    BitcoinExchange bitex;
    bitex.loadCSV("data.csv", ",", false);
    // for (std::map<std::string, std::string>::const_iterator it2 = bitex.getInput().begin(); it2 != bitex.getInput().end(); ++it2)
    //         std::cout << "data_load" << it2->first << it2->second << std::endl;
    BitcoinExchange input;
    input.loadCSV(argv[1], "|", true);
    // for (std::map<std::string, std::string>::const_iterator it2 = input.getInput().begin(); it2 != input.getInput().end(); ++it2)
    //     std::cout << "data_load" << it2->first << "value" << it2->second << std::endl;
    input.findRate(input, bitex);
    return 0;
}