/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:28:49 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/20 13:51:07 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::frac = 8;

//Empty Constructor
Fixed::Fixed() : nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

//Copy Constructor
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	nbr = copy.getRawBits();
	return ;
}

//Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

//Fixed Operator
Fixed &Fixed::operator=(Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->nbr = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return (this->nbr);
}

void Fixed::setRawBits(int const raw)
{
	this->nbr = raw;
}