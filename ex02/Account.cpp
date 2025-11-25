/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:35:28 by dmaestro          #+#    #+#             */
/*   Updated: 2025/11/25 20:06:39 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
Account::Account()
{
    Account::_nbAccounts = 0;
    Account::_totalAmount = 0;
    Account::_totalNbDeposits = 0;
    Account::_totalNbWithdrawals = 0;
    Account::_nbDeposits = 0;
    Account::_amount = 0;
    Account::_accountIndex = 0;
    Account::_nbWithdrawals = 0;
    
}
Account::Account(int initial_deposit)
{
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    Account::_totalNbDeposits++;
    Account::_nbDeposits = 1;
    Account::_amount = initial_deposit;
    Account::_accountIndex = (int)Account::getNbAccounts;
    Account::_nbWithdrawals = 0;
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
    Account::_amount += deposit;
    Account::_nbDeposits++;
    Account::_totalNbDeposits++;
}
bool Account::makeWithdrawal( int withdrawal )
{
    if(Account::_amount - withdrawal < 0)
        return(false);
    Account::_totalAmount -= withdrawal;
    Account::_amount -= withdrawal;
    Account::_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    return(true);
}
int		Account::checkAmount( void ) const
{
    return(Account::_amount);
}



