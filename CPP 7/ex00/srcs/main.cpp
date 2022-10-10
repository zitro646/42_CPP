/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:23:12 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/10/10 14:30:22 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include<iomanip>
#include<iostream>

class Awesome {
	private:
		int _n;
	public:
		Awesome(int n):_n(n){return;}
		bool operator==(Awesome const & rhs)const{return(this->_n==rhs._n);}
		bool operator!=(Awesome const & rhs)const{return(this->_n!=rhs._n);}
		bool operator>(Awesome const & rhs)const{return(this->_n>rhs._n);}
		bool operator<(Awesome const & rhs)const{return(this->_n<rhs._n);}
		bool operator>=(Awesome const & rhs)const{return(this->_n>=rhs._n);}
		bool operator<=(Awesome const & rhs)const{return(this->_n<=rhs._n);}
		int	get_n(void) const{return(this->_n);}
	
};
std::ostream &operator<<(std::ostream& os, const Awesome &aw)
{
	os << aw.get_n();
	return (os);
}
int main( void ) 
{
	int a = 2;
	int b = 3;
	std::string c = "chaine1";
	std::string d = "chaine2";
	Awesome aw1(66);
	Awesome aw2(25);

	std::cout << "OPERACIONES SIMPLES" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "OPERACIONES COMPLEJAS" << std::endl;
	::swap(aw1, aw2);
	std::cout << "aw1 = " << aw1 << ", aw2 = " << aw2 << std::endl;
	std::cout << "min( aw1, aw2 ) = " << ::min( aw1, aw2 ) << std::endl;
	std::cout << "max( aw1, aw2 ) = " << ::max( aw1, aw2) << std::endl;
	return 0; 
}
