/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:37:37 by moichou           #+#    #+#             */
/*   Updated: 2024/10/12 17:40:08 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0; // Static members must be defined outside the class
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    this->_accountIndex = _nbAccounts++;
    _totalAmount += initial_deposit;

    std::cout << "[19920104_091532] "
              << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";"
              << "created" << std::endl;
}

Account::~Account()
{
    std::cout << "[19920104_091532] "
              << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";"
              << "closed" << std::endl;
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    std::cout << "[19920104_091532] "
              << "accounts:" << _nbAccounts << ";"
              << "total:" << _totalAmount << ";"
              << "deposits:" << _totalNbDeposits << ";"
              << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;

    std::cout << "[19920104_091532] "
              << "index:" << this->_accountIndex << ";"
              << "p_amount:" << this->_amount - deposit << ";"
              << "deposit:" << deposit << ";"
              << "amount:" << this->_amount << ";"
              << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal > this->_amount)
    {
        std::cout << "[19920104_091532] "
                  << "index:" << this->_accountIndex << ";"
                  << "p_amount:" << this->_amount << ";"
                  << "withdrawal:refused" << std::endl;
        return false;
    }

    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    std::cout << "[19920104_091532] "
              << "index:" << this->_accountIndex << ";"
              << "p_amount:" << this->_amount + withdrawal << ";"
              << "withdrawal:" << withdrawal << ";"
              << "amount:" << this->_amount << ";"
              << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;

    return true;
}

int Account::checkAmount(void) const
{
    return this->_amount;
}

void Account::displayStatus(void) const
{
    std::cout << "[19920104_091532] "
              << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";"
              << "deposits:" << this->_nbDeposits << ";"
              << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
