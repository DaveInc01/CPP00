#include "Account.hpp"

int	Account::_nbAccounts = 0;

int	Account::_totalNbWithdrawals = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalAmount = 0;

void Account::_displayTimestamp()
{
	time_t now = time(0);

   tm *ltm = localtime(&now);

	std::cout << "[";
   // print various components of tm structure.
   std::cout << 1900 + ltm->tm_year;
   if (1 + ltm->tm_mon < 10)
	std::cout << 0;
   std::cout << 1 + ltm->tm_mon;
   if (ltm->tm_mday < 10)
	std::cout << 0;
   std::cout << ltm->tm_mday;
   std::cout << "_";
   if (ltm->tm_hour < 10)
	std::cout << 0;
   std::cout << ltm->tm_hour;
   if (ltm->tm_min < 10)
	std::cout << 0;
   std::cout << ltm->tm_min;
   if (ltm->tm_sec < 10)
	std::cout << 0;
   std::cout << ltm->tm_sec;
   std::cout << "]";
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts += 1;
	this->_accountIndex = _nbAccounts - 1;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account( void ){}

void	Account::makeDeposit( int deposit ){
	this->_nbDeposits += 1;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount << ";deposit:" << deposit
	<< ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount - withdrawal >= 0)
	{
		this->_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << withdrawal << ";amount:" << this->_amount - withdrawal
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const{
	return (this->_amount);
}

int Account::getNbAccounts( void ){
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}


// Display Total accounst info
void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts
	<< ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits
	<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}
// Single account info
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";ammount:" << this->_amount << ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";amount:" << this->_amount << ";closed" << std::endl;
}
