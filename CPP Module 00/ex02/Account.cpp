/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:28:23 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/08 06:42:49 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_accountIndex = ++_nbAccounts - 1;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "created" << std::endl;
}

Account::~Account( void ){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
	
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout <<  "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int tmp = this->_amount;
	this->_amount -= withdrawal;
	if (_amount < 0)
	{
		_displayTimestamp();
		this->_amount = tmp;
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		_displayTimestamp();
		_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << tmp << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals<< std::endl;
		return (true);
	}
}

int		Account::checkAmount( void ) const
{
	return (_amount);
} 


void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	char tt[19];
 	std::time_t now = std::time(NULL);
 	std::tm tm = *std::localtime(&now);
	std::strftime(tt, 19, "[%Y%m%d_%H%M%S] ", &tm); 
	std::cout << tt;
}