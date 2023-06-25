#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"
#include <iostream>

int main ()
{
    typedef std::vector<Account::t>							  accounts_t;
	typedef std::vector<int>								  ints_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
    size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
    accounts_t				accounts( amounts, amounts + amounts_size );
    std::iterator<Account::t>	i;
    // std::cout << "sizeof(amounts) - " << sizeof(amounts) << std::endl; 


}