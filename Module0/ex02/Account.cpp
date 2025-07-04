/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 11:31:39 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/04 12:18:11 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int  initial_deposit)                                                                     //Constructor
    : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)               //initialize variables
{
   _nbAccounts++;
   _totalAmount += initial_deposit;
   _displayTimestamp();
   std::cout << " index:" << _accountIndex
             << ";amount" << _amount
             << ";created" << std::endl;

}
Account::~Account ( void )  //destructor
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << _amount
              << ":deposit:" << deposit;
    
    _amount += deposit;                                                                                       //add to amount the deposit
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    
    std::cout << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << _amount;
    if(_amount >= withdrawal)                                                                                 //if we have enought that withdrawal that amount
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;

        std::cout << ";withdrawal:" << withdrawal
                  << ";amount:" << _amount
                  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
    else
    {
        std::cout << ":withdrawal:refused" << std::endl;
        return false;
    }
}
int Account::checkAmount(void) const
{
    return _amount;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();                                          
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals << std::endl;
}

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )                              //display all info from account
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void )
{
    std::time_t t = std::time(NULL);                                 //get global time
    std::tm* now = std::localtime(&t);                                  //get current time 

    std::cout << '['
              << (now->tm_year + 1900)                                  //display year
              << std::setw(2) << std::setfill('0') << now->tm_mon + 1   //display month
              << std::setw(2) << std::setfill('0') << now->tm_mday      //display day
              << '_'                                                    //display underscore
              << std::setw(2) << std::setfill('0') << now->tm_hour      //display hour
              << std::setw(2) << std::setfill('0') << now->tm_min       //display minute
              << std::setw(2) << std::setfill('0') << now->tm_sec       //display second
              << "]";
}