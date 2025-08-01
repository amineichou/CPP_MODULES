#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "error : invalid args!" << std::endl;
        return 1;
    }

    BitcoinExchange test;

    try
    {
        test.readDataBase();
        test.readDataBase();
        test.execute(av[1]);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}