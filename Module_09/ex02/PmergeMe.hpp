/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:28:10 by moichou           #+#    #+#             */
/*   Updated: 2025/08/04 11:47:12 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    std::vector<int> getJacobsthalSequence(size_t) const;
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