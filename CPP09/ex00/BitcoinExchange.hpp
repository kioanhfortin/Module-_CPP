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
        const std::multimap<std::string, std::string> &getInput() const;
        bool loadCSV(const std::string& filename, std::string sep, bool skipe);
        void findRate(BitcoinExchange input, BitcoinExchange bitex);
    private:
        std::multimap<std::string, std::string> inputStr;
};

bool checkValidKey(std::string key);

#endif
