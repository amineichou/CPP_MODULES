/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:26:55 by moichou           #+#    #+#             */
/*   Updated: 2025/08/04 11:26:56 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &othr)
{
    this->dataBase = othr.dataBase;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &sec)
{
    if (this != &sec)
    {
        this->dataBase = sec.dataBase;
    }
    return *this;
}

void BitcoinExchange::ft_strtrim(std::string &str)
{
    size_t start = 0;
    while (start < str.size() && std::isspace(str[start]))
        start++;

    size_t end = str.size();
    while (end > start && std::isspace(str[end - 1]))
        end--;
    str = str.substr(start, end - start);
}

void BitcoinExchange::readDataBase(void)
{
    dataBaseFile.open("data.csv");
    if (dataBaseFile.is_open())
    {
        std::string line;

        while (std::getline(dataBaseFile, line))
        {
            if (line.empty())
                continue;

            ft_strtrim(line);
            if (line.find("date,exchange_rate") != std::string::npos)
                continue;
            size_t pos = line.find(',');
            if (pos == std::string::npos)
                throw std::runtime_error("invalid line format in database.");
            std::string date = line.substr(0, pos);
            std::string value = line.substr(pos + 1);
            ft_strtrim(date);
            ft_strtrim(value);
            if (date.empty() || value.empty())
                throw std::runtime_error("invalid date or value in database.");
            dataBase[date] = value;
        }

        if (dataBase.empty())
            throw std::runtime_error("database is empty.");
    }
    else
        throw std::runtime_error("can't open database file.");
}

float BitcoinExchange::getValueFromDatabase(const std::string &date)
{
    std::map<std::string, std::string>::iterator it = dataBase.lower_bound(date);

    if (it == dataBase.end())
        it--;

    return std::atof(it->second.c_str());
}

void BitcoinExchange::HandlePrintDateAndValue(std::string &date, std::string &value)
{

    if (date.empty() || value.empty())
    {
        std::cout << "Error: bad input => " << date << " | " << value << std::endl;
        return;
    }

    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return;
    }

    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

    if (month < 1 || month > 12 || day < 1 || day > 31 || year < 2009)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return;
    }

    double val = std::atof(value.c_str());

    if (val > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return;
    }

    if (val < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return;
    }

    float searchValue = getValueFromDatabase(date);

    std::cout << date << " => " << value << " = " << (val * searchValue) << std::endl;
}

void BitcoinExchange::execute(char *fileName)
{
    inputFile.open(fileName);
    if (inputFile.is_open())
    {
        std::string line;
        while (std::getline(inputFile, line))
        {
            if (line.empty())
                continue;
            
            if (line.find("date | value") != std::string::npos)
                continue;

            // process line
            
            size_t pos = line.find('|');

            if (pos == std::string::npos)
            {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }

            std::string date = line.substr(0, pos);
            std::string value = line.substr(pos + 1);

            ft_strtrim(date);
            ft_strtrim(value);

            HandlePrintDateAndValue(date, value);
        }
    }
    else
        throw std::runtime_error("input file is not open.");
}
