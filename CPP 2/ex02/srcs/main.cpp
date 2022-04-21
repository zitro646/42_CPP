/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:08:51 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/21 12:23:22 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
//clang++ main.cpp Fixed.cpp

int main( void ) 
{
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
	/*Fixed a( 42.42f );
	Fixed b( 42.42f );
	Fixed c( 10 );
	Fixed d( 100 );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "Empezamos las comparaciones "<< std::endl;
	std::cout << " a("<< a << ") != b("<< b << ") -> "<< (a!=b) << std::endl;
	std::cout << " a("<< a << ") != c("<< c << ") -> "<< (a!=c) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") == b("<< b << ") -> "<< (a==b) << std::endl;
	std::cout << " a("<< a << ") == c("<< c << ") -> "<< (a==c) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") > c("<< c << ") -> "<< (a>c) << std::endl;
	std::cout << " a("<< a << ") > d("<< d << ") -> "<< (a>d) << std::endl;
	std::cout << " a("<< a << ") > b("<< b << ") -> "<< (a>b) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") >= c("<< c << ") -> "<< (a>=c) << std::endl;
	std::cout << " a("<< a << ") >= d("<< d << ") -> "<< (a>=d) << std::endl;
	std::cout << " a("<< a << ") >= b("<< b << ") -> "<< (a>=b) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") < c("<< c << ") -> "<< (a<c) << std::endl;
	std::cout << " a("<< a << ") < d("<< d << ") -> "<< (a<d) << std::endl;
	std::cout << " a("<< a << ") < b("<< b << ") -> "<< (a<b) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") <= c("<< c << ") -> "<< (a<=c) << std::endl;
	std::cout << " a("<< a << ") <= d("<< d << ") -> "<< (a<=d) << std::endl;
	std::cout << " a("<< a << ") <= b("<< b << ") -> "<< (a<=b) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") - b("<< b << ") -> "<< (a-b) << std::endl;
	std::cout << " a("<< a << ") - c("<< c << ") -> "<< (a-c) << std::endl;
	std::cout << " a("<< a << ") - d("<< d << ") -> "<< (a-d) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") + b("<< b << ") -> "<< (a+b) << std::endl;
	std::cout << " a("<< a << ") + c("<< c << ") -> "<< (a+c) << std::endl;
	std::cout << " a("<< a << ") + d("<< d << ") -> "<< (a+d) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") * b("<< b << ") -> "<< (a*b) << std::endl;
	std::cout << " a("<< a << ") * c("<< c << ") -> "<< (a*c) << std::endl;
	std::cout << " a("<< a << ") * d("<< d << ") -> "<< (a*d) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") / b("<< b << ") -> "<< (a/b) << std::endl;
	std::cout << " a("<< a << ") / c("<< c << ") -> "<< (a/c) << std::endl;
	std::cout << " a("<< a << ") / d("<< d << ") -> "<< (a/d) << std::endl;*/
	/*std::cout << "__________________________________________"<< std::endl;
	std::cout << "Pre-decrement " << std::endl;
	std::cout << "Before a = "<< a << std::endl;
	std::cout << "--a("<< --a << ")"<< std::endl;
	std::cout << "After a = "<< a << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << "Post-decrement " << std::endl;
	std::cout << "Before b = "<< b << std::endl;
	std::cout << "b--("<< b-- << ")"<< std::endl;
	std::cout << "After b = "<< b << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << "Pre-increment " << std::endl;
	std::cout << "Before a = "<< a << std::endl;
	std::cout << "++a("<< ++a << ")"<< std::endl;
	std::cout << "After a = "<< a << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << "Post-increment " << std::endl;
	std::cout << "Before b = "<< b << std::endl;
	std::cout << "b++("<< b++ << ")"<< std::endl;
	std::cout << "After b = "<< b << std::endl;
	std::cout << "__________________________________________"<< std::endl;*/
	return 0; 
}