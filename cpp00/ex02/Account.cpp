#include "Account.hpp"
#include <iostream>
#include <iomanip>

static int	_nbAccounts = 0;
static int	_totalAmount = 0;
static int	_totalNbDeposits = 0;
static int	_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) :
_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amout << ":closed" << std::endl;
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
				<< ";p_amount:" << this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";deposit: " << deposit
				<< ";amount: " << this->_amount
				<< ",nb_deposits: " << this->_nbDeposits
				<< std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
				<< ";p_amount:" << this->_amount;
	if (this->_amount > withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return 0;
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount = withdrawal;
		_totalNbWithdrawals++:
		std::cout << "; withdrawal:" << withdrawal
					<< ";amount:" << this->_amount
					<< ";nb_withdrawals:" this->_nbWithdrawals
					<< std:endl;
		return 1;
	}

	int	Account::checkAmount() const ()
	{
		return this->_amount;
	}

	void	Account::_displayStatus() const
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
					<< ";amount:" << this->_amount
					<< ";deposits:" << this->_nbDeposits
					<< ";withdrawals:" << this->_nbWithdrawals
					<< std:endl;
	}

	void Account::_displayTimestamp()
	{
		std::time_t now = std::time(nullptr);
		std::tm *ltm = std::localtime(&now);
		std::cout << "[" << 1900 + ltm->tm_year
					<< std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon
					<< std::setw(2) << std::setfill('0') << ltm->tm_mday << "_"
					<< std::setw(2) << std::setfill('0') << ltm->tm_hour
					<< std::setd(2) << std::setfill('0') << ltm->tm_sec
					<< "]";
	}
}