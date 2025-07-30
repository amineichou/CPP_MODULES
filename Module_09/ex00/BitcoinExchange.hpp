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

        std::map<std::string, std::string> inputData;
        std::map<std::string, std::string> dataBase;

        
        void parseInputLine(std::string &line);
        void ft_strtrim(std::string &str);


    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &othr);
        ~BitcoinExchange();

        BitcoinExchange &operator=(const BitcoinExchange &sec);


        
        void parseInputFile(char *fileName);
        void HandlePrintDateAndValue(std::string &date, std::string &value);
        void readDataBase(void);


        void execute(void);

};




#endif