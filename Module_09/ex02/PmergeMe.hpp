#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

class PmergeMe
{

private:
    std::vector<int> numbersVector;
    std::deque<int> numbersDeque;

    int getJacobsthalSequence(int n) const;
    void insertSmallestIntoBiggest(const std::vector<int> &smallestNumbers, std::vector<int> &biggestNumbers);
    void insertSmallestIntoBiggest(const std::deque<int> &smallestNumbers, std::deque<int> &biggestNumbers);
    int binarySearchPosition(int position, std::vector<int> &smallestNumbers) const;
    int binarySearchPosition(int position, std::deque<int> &smallestNumbers) const;
    void sortVector();
    void sortDeque();

public:
    PmergeMe();
    PmergeMe(const PmergeMe &src);
    ~PmergeMe();

    PmergeMe &operator=(const PmergeMe &othr);

    void parseInput(int ac, char **av);

    void runEverything(int ac);

};












#endif