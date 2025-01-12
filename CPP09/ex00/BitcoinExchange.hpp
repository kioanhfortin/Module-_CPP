#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <map>

class BitcoinExchange {
    public:
        BitcoinExchange() {}
        ~BitcoinExchange() {}
        const std::map<std::string, float> &getInput() const;
        bool loadCSV(const std::string& filename, const std::string& sep, bool skipHeader);
        bool checkValidKey(std::string key);
    private:
        std::map<std::string, float> input;
};

#endif