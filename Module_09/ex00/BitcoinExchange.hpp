/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:26:38 by moichou           #+#    #+#             */
/*   Updated: 2025/08/05 16:21:46 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <map>

class BitcoinExchange {

    private:
        std::ifstream dataBaseFile;
        std::ifstream inputFile;

        std::map<std::string, std::string> dataBase;

        
        void ft_strtrim(std::string &str);
        int parseValue(std::string value) const;
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