/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:28:49 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/18 15:28:46 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::frac = 8;

Fixed::Fixed() : nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &copy) : nbr(copy.nbr) 
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->nbr = fixed.nbr;
	return *this;
}

int Fixed::getRawBits(void)
{
	int i;
	int count;

	std::cout << "getRawBits member function called" << std::endl;
	i = 0;
	count = 0;
	while (i < 32)
	{
		if (1&(nbr >> i++))
			count++;	
	}
	return (count);
}

void Fixed::setRawBits(int const raw)
{
	int i;

	std::cout << "setRawBits member function called" << std::endl;
	i = 0;
	nbr = 0;
	while (i < 32)
	{
		if (1&(raw >> i))
		{
			nbr += (1 << i);
		}
		i++;
	}
}