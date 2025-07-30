#include "RPN.hpp"


int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "invalid args" << std::endl;
        return 1;
    }

    RPN test;
    test.calculate(av[1]);

    return 0;
}
