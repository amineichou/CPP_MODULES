/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:28:02 by moichou           #+#    #+#             */
/*   Updated: 2025/08/04 15:45:33 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &othr)
{
    if (this != &othr)
    {
        this->numbersVector = othr.numbersVector;
        this->numbersDeque = othr.numbersDeque;
    }
    return *this;
}

void PmergeMe::parseInput(int ac, char **av)
{
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j] != '\0'; j++)
        {
            if (!isdigit(av[i][j]) && av[i][j] != ' ' && av[i][j] != '+')
            {
                throw std::runtime_error("invalid input");
            }
        }

        int num = std::atoi(av[i]);

        numbersVector.push_back(num);
        numbersDeque.push_back(num);
    }
}

int PmergeMe::binarySearchPosition(int value, std::vector<int> &biggestNumbers) const
{
    std::vector<int>::iterator it = std::lower_bound(biggestNumbers.begin(), biggestNumbers.end(), value);
    if (it == biggestNumbers.end())
        return biggestNumbers.size();

    return std::distance(biggestNumbers.begin(), it);
}

int PmergeMe::binarySearchPosition(int position, std::deque<int> &biggestNumbers) const
{
    int left = 0;
    int right = biggestNumbers.size();

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (biggestNumbers[mid] < position)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

std::vector<int> PmergeMe::getJacobsthalSequence(size_t size) const
{
    std::vector<int> sequence;

    if (size <= 0)
        return sequence;

    sequence.push_back(0);
    if (size == 1)
        return sequence;

    sequence.push_back(1);
    int a = 0;
    int b = 1;
    size_t count = 2;

    while (count < size)
    {
        int next = b + 2 * a;
        sequence.push_back(next);
        a = b;
        b = next;
        count++;
    }

    return sequence;
}

void PmergeMe::insertSmallestIntoBiggest(const std::vector<int> &smallestNumbers, std::vector<int> &biggestNumbers)
{
    std::vector<int> generatedSequence = getJacobsthalSequence(smallestNumbers.size());
    size_t i = 0;

    while (i < generatedSequence.size())
    {
        size_t index = generatedSequence[i];
        if (index < smallestNumbers.size())
        {
            int valueToInsert = smallestNumbers[index];
            size_t position = binarySearchPosition(valueToInsert, biggestNumbers);
            biggestNumbers.insert(biggestNumbers.begin() + position, valueToInsert);
        }
        i++;
    }
}

void PmergeMe::insertSmallestIntoBiggest(const std::deque<int> &smallestNumbers, std::deque<int> &biggestNumbers)
{
    std::vector<int> generatedSequence = getJacobsthalSequence(smallestNumbers.size());
    size_t i = 0;

    while (i < generatedSequence.size())
    {
        size_t index = generatedSequence[i];
        if (index < smallestNumbers.size())
        {
            int valueToInsert = smallestNumbers[index];
            size_t position = binarySearchPosition(valueToInsert, biggestNumbers);
            biggestNumbers.insert(biggestNumbers.begin() + position, valueToInsert);
        }
        i++;
    }
}

void PmergeMe::sortVector()
{
    size_t size = numbersVector.size();

    if (size <= 1)
        return;

    std::vector<std::pair<int, int> > pairs;
    std::vector<int> sortedNumbers;
    int restNumber = -1;

    size_t i = 0;

    while (i + 1 < size)
    {
        int a = numbersVector[i];
        int b = numbersVector[i + 1];
    
        if (a > b)
            pairs.push_back(std::make_pair(a, b));
        else
            pairs.push_back(std::make_pair(b, a));
        i += 2;
    }

    if (i < size)
        restNumber = numbersVector[i];

        
    for (size_t j = 0; j < pairs.size(); j++)
    {
        for (size_t k = j + 1; k < pairs.size(); k++)
        {
            if (pairs[j].first > pairs[k].first)
            {
                std::swap(pairs[j], pairs[k]);
            }
        }
    }
        
    
    // split into two vectors 
    
    std::vector<int> biggestValues;
    std::vector<int> smallestValues;
    
    for (size_t j = 0; j < pairs.size(); j++)
    {
        biggestValues.push_back(pairs[j].first);
        smallestValues.push_back(pairs[j].second);
    }


    insertSmallestIntoBiggest(smallestValues, biggestValues);

    if (restNumber != -1)
    {
        int pos = binarySearchPosition(restNumber, biggestValues);
        biggestValues.insert(biggestValues.begin() + pos, restNumber);
    }

    numbersVector = biggestValues;
}


void PmergeMe::sortDeque()
{
    size_t size = numbersVector.size();

    if (size <= 1)
        return;

    std::vector<std::pair<int, int> > pairs;
    std::vector<int> sortedNumbers;
    int restNumber = -1;

    size_t i = 0;

    while (i + 1 < size)
    {
        int a = numbersVector[i];
        int b = numbersVector[i + 1];
    
        if (a > b)
            pairs.push_back(std::make_pair(a, b));
        else
            pairs.push_back(std::make_pair(b, a));
        i += 2;
    }

    if (i < size)
        restNumber = numbersVector[i];

        
    for (size_t j = 0; j < pairs.size(); j++)
    {
        for (size_t k = j + 1; k < pairs.size(); k++)
        {
            if (pairs[j].first > pairs[k].first)
            {
                std::swap(pairs[j], pairs[k]);
            }
        }
    }

    
    std::deque<int> biggestValues;
    std::deque<int> smallestValues;
    
    for (size_t j = 0; j < pairs.size(); j++)
    {
        biggestValues.push_back(pairs[j].first);
        smallestValues.push_back(pairs[j].second);
    }


    insertSmallestIntoBiggest(smallestValues, biggestValues);

    if (restNumber != -1)
    {
        int pos = binarySearchPosition(restNumber, biggestValues);
        biggestValues.insert(biggestValues.begin() + pos, restNumber);
    }

    numbersDeque = biggestValues;
}


void PmergeMe::runEverything(int ac)
{
    clock_t start, end;
    std::cout << "Before: ";
    for (size_t i = 0; i < numbersVector.size(); i++)
    {
        std::cout << numbersVector[i];
        if (i < numbersVector.size() - 1)
            std::cout << " ";
    }
    start = clock();
    sortVector();
    end = clock();
    std::cout << "\nAfter: ";
    for (size_t i = 0; i < numbersVector.size(); i++)
    {
        std::cout << numbersVector[i];
        if (i < numbersVector.size() - 1)
            std::cout << " ";
    }

    std::cout << "\nTime to process a range of " << ac - 1 << " elements with std::vector : "  << ((double)(end - start) / CLOCKS_PER_SEC) * 1000000 << " us";

    start = clock();
    sortDeque();
    end = clock();

    std::cout << "\nTime to process a range of " << ac - 1 << " elements with std::deque : "  << ((double)(end - start) / CLOCKS_PER_SEC) * 1000000 << " us" << std::endl;
}
