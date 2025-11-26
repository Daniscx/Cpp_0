/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:35:28 by dmaestro          #+#    #+#             */
/*   Updated: 2025/11/26 20:26:14 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
    Account::_nbAccounts = 0;
    Account::_totalAmount = 0;
    Account::_totalNbDeposits = 0;
    Account::_totalNbWithdrawals = 0;
    Account::_nbDeposits = 0;
    this->_amount = 0;
    this->_accountIndex = 0;
    this->_nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    Account::_totalNbDeposits++;
    Account::_nbDeposits = 1;
    this->_amount = initial_deposit;
    this->_accountIndex = (int)Account::getNbAccounts();
    this->_nbWithdrawals = 0;
}
int Account::getTotalAmount()
{
    return(Account::_totalAmount);    
}
int	Account::getNbAccounts( void )
{
    return(Account::_nbAccounts);
}
int	Account::getNbWithdrawals( void )
{
    return(Account::_totalNbWithdrawals);
    
}
int	Account::getNbDeposits( void )
{
    return(Account::_totalNbDeposits);
}
void Account::makeDeposit( int deposit )
{
    Account::_totalAmount += deposit;
    this->_amount += deposit;
    Account::_nbDeposits++;
    Account::_totalNbDeposits++;
}
bool Account::makeWithdrawal( int withdrawal )
{
    Account::_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    if(this->_amount - withdrawal < 0)
    {
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";";
        std::cout << "ammount:" << this->_amount << ";";
        std::cout << "withdrawals:refused";
    }
        return(false);
    Account::_totalAmount -= withdrawal;
    this->_amount -= withdrawal;
    return(true);
}
void	Account::_displayTimestamp( void )
{
    std::cout << std::endl;
    std::time_t time = std::time(NULL);
    std::cout << "[" << time <<  "]" << std::endl;
}

int		Account::checkAmount( void ) const
{
    return(Account::_amount);
}
void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits :" << Account::getNbDeposits() <<";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals();
}
void	Account::displayStatus( void ) const
{
    std::cout << std::endl;
    _displayTimestamp();
     std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "ammount:" << this->_amount << ";";
    std::cout << "deposits" << this->_nbDeposits << ";";
    std::cout <<"withdrawls" << this->_nbWithdrawals;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "ammount:" << this->_amount << ";";
    std::cout << "account closed" << std::endl;
}


