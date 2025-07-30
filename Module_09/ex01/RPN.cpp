#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &othr)
{
    *this = othr;
}

RPN &RPN::operator=(const RPN &othr)
{
    if (this != &othr)
    {
        storage = othr.storage;
    }
    return *this;
}

void RPN::calculate(std::string input)
{
    if (input.empty())
    {
        std::cerr << "Error: input is empty. " << std::endl;
        return;
    }

    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == '-' || input[i] == '+' || input[i] == '*' || input[i] == '/')
        {
            if (storage.size() < 2)
            {
                std::cerr << "Error: not enogh numbers to perform an operator" << std::endl;
                return;
            }

            int y = storage.top();
            storage.pop();
            int x = storage.top();
            storage.pop();

            if (input[i] == '-')
                storage.push(x - y);

            else if (input[i] == '+')
                storage.push(x + y);

            else if (input[i] == '*')
                storage.push(x * y);
                
            else if (input[i] == '/')
            {
                if (y == 0)
                {
                    std::cerr << "Error: division by zero" << std::endl;
                    return;
                }
                storage.push(x / y);
            }
        }
        else if (std::isdigit(input[i]))
        {
            storage.push(input[i] - '0');
        }
        else if (input[i] == ' ')
        {
            continue;
        }
        else
        {
            std::cerr << "Error: invalid character '" << input[i] << "'" << std::endl;
            return;
        }
    }

    if (storage.size() != 1)
    {
        std::cerr << "Error: invalid input expression" << std::endl;
        return;
    }

    std::cout << storage.top() << std::endl;
}
