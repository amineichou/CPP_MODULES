/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:10:44 by moichou           #+#    #+#             */
/*   Updated: 2024/11/01 15:01:03 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cout << "No valid args.\n";
        return 1;
    }

    if (av[2][0] == '\0')
    {
        std::cout << "No valid args.\n";
        return 1;
    }

    std::ifstream mainFile(av[1]);
    std::string resString, line;
    if (mainFile.is_open())
    {
        while (std::getline(mainFile, line))
        {
            resString += replaceStr(line, av[2], av[3]);
            if (!mainFile.eof())
                resString += "\n";
        }
    }
    else
    {
        std::cout << "no file \"" << av[1] << "\" available, try to create it.\n";
        return 1;
    }

    std::string fileName = av[1];
    fileName += ".replace";
    std::ofstream replacedFile(fileName);
    
    if (replacedFile.is_open())
    {
        replacedFile << resString;
    }
    else
    {
        mainFile.close();
        std::cout << "no file \"" << av[2] << "\" available, try to create it.\n";
        return 1;
    }


    mainFile.close();
    replacedFile.close();
}