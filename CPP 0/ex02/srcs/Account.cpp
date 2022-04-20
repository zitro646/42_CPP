#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

//Declaramos las variables estaticas
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//Funciones Constructoras
Account::Account(int initial_deposit ) : _amount(initial_deposit)
{
	_accountIndex = getNbAccounts();
    Account::_nbAccounts++;
    Account::_totalAmount += this->_amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout<<"index:"<<this->_accountIndex;
    std::cout<<";amount:"<<this->_amount;
    std::cout<<";created"<<std::endl;
    return;
}

Account::Account(void)
{
    return;
}

//Destructors
Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout<<"index:"<<this->_accountIndex;
    std::cout<<";amount:"<<this->checkAmount();
    std::cout<<";closed"<<std::endl;
    return;
}

//Funciones para mostrar los datos
void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout<<"accounts:"<<getNbAccounts();
    std::cout<<";total:"<<getTotalAmount();
    std::cout<<";deposits:"<<getNbDeposits();
    std::cout<<";withdrawals:"<<getNbWithdrawals()<<std::endl;
}

void    Account::_displayTimestamp( void )
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::cout<<"["<<1900+ltm->tm_year;
    std::cout<<std::setw(2) << std::setfill('0')<<1 + ltm->tm_mon;
    std::cout<<std::setw(2) << std::setfill('0')<<ltm->tm_mday<<"_";
    std::cout<<std::setw(2) << std::setfill('0')<<ltm->tm_hour;
    std::cout<<std::setw(2) << std::setfill('0')<<ltm->tm_min;
    std::cout<<std::setw(2) << std::setfill('0')<<ltm->tm_sec<<"] ";
}

//Funciones para modificar los datos

void    Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout<<"index:"<<this->_accountIndex;
    std::cout<<";amount:"<<this->_amount;
    std::cout<<";deposits:"<<this->_nbDeposits;
    std::cout<<";withdrawals:"<<this->_nbWithdrawals<<std::endl;
}

void    Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    _amount += deposit;
    Account::_totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout<<"index:"<<this->_accountIndex;
    std::cout<<";p_amount:"<<this->_amount - deposit;
    std::cout<<";deposit:"<<deposit;
    std::cout<<";amount:"<<this->_amount;
    std::cout<<";nb_deposits:"<<this->_nbDeposits<<std::endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout<<"index:"<<this->_accountIndex;
    if (this->checkAmount() < withdrawal)
    {
        std::cout<<";withdrawal:refused"<<std::endl;
        return (0);
    }
    std::cout<<";p_amount:"<<this->_amount;
    _amount -= withdrawal;
    std::cout<<";withdrawal:"<<withdrawal;
    std::cout<<";amount:"<<this->_amount;
    Account::_totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout<<";nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
    return (1);
}

int     Account::checkAmount( void ) const
{
    return (_amount);
}

//Metodos Get
int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}