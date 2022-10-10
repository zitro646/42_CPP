/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:43:30 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/10/10 14:48:15 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iomanip>
#include<iostream>

//Tester
class Awesome {
	public: Awesome( void ) : _n( 42 ) { return; } 
	int get( void ) const { return this->_n; } 
	private: int _n; 
}; 

std::ostream&operator<<(std::ostream &o, Awesome const &rhs)
{
	o<<rhs.get();
	return o;
} 

template<typename T>
void print(T &x)
{	
	std::cout << x << std::endl;	
}


//Functions
template<typename T>
void add_one(T &n1)
{	
	n1++;
}

template<typename T>
void rest_one(T &n1)
{	
	n1--;
}

template<typename T>
void add_a_char(T &n1)
{	
	n1.append("a");
}

template<typename T>
void show(T &n1)
{	
	std::cout << n1 << std::endl;	
}


template<typename T>
void iter(T *n1, unsigned int i, void (*func)(T &p1))
{
	unsigned int x;

	x = 0;
	while (x < i)
	{
		func(n1[x]);
		x++;
	}
}