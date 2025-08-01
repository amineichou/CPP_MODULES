#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <map>

class BitcoinExchange {

    private:
        std::fstream dataBaseFile;
        std::fstream inputFile;

        std::map<std::string, std::string> dataBase;

        
        void ft_strtrim(std::string &str);
        float getValueFromDatabase(const std::string &date);


    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &othr);
        ~BitcoinExchange();

        BitcoinExchange &operator=(const BitcoinExchange &sec);


        
        void execute(char *fileName);
        void HandlePrintDateAndValue(std::string &date, std::string &value);
        void readDataBase(void);

};




#endif