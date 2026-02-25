/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:35:28 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/24 17:59:28 by dmaestro         ###   ########.fr       */
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
    this->_accountIndex = (int)Account::getNbAccounts();
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    Account::_nbDeposits = 0;
    this->_amount = initial_deposit;
    this->_nbWithdrawals = 0;
    _displayTimestamp();
     std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout <<"created" << std::endl;
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
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
      std::cout << "p_amount:" << this->_amount << ";";
    this->_amount += deposit;
    Account::_nbDeposits++;
     std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout <<"nb_deposits" << this->_nbDeposits << std::endl;
    Account::_totalNbDeposits++;
}
bool Account::makeWithdrawal( int withdrawal )
{
    
    if(this->_amount - withdrawal < 0)
    {
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";";
        std::cout << "amount:" << this->_amount << ";";
        std::cout << "withdrawals:refused" << std::endl;
        return(false);
    }
        
    Account::_nbWithdrawals++;
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";";
        std::cout << "p_amount:" << this->_amount << ";";
        std::cout << "withdrawal:" << withdrawal<< ";";
        Account::_totalAmount -= withdrawal;
        std::cout << "amount:" << this->_amount << ";";
        std::cout << "withdrawals:" << this->_nbWithdrawals<< std::endl;
        
    Account::_totalNbWithdrawals++;

    this->_amount -= withdrawal;
    return(true);
}
void	Account::_displayTimestamp( void )
{
    std::time_t time = std::time(NULL);
    std::cout << "[" << time <<  "] " ;
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
    std::cout << "deposits:" << Account::getNbDeposits() <<";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals();
     std::cout << std::endl;
}
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
     std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout <<"withdrawls:" << this->_nbWithdrawals;
     std::cout << std::endl;
}

Account::~Account( void )
{   
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}


