/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:28:49 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/20 14:53:09 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

const int Fixed::frac = 8;

//Empty Constructor
Fixed::Fixed() : nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

//Int Constructor
Fixed::Fixed(int number) : nbr(number << 8)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

//Float Constructor
Fixed::Fixed(float number) : nbr(static_cast<int>(roundf(number * (1 << frac))))
{
	std::cout << "Float constructor called" << std::endl;
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

//Fixed Operator assign
Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->nbr = fixed.getRawBits();
	return *this;
}

//Fixed Operator output
std::ostream& operator<<(std::ostream& os, const Fixed &f) //, const Fixed &f
{
	os << f.toFloat();
	return (os);
}


int Fixed::getRawBits(void) const
{
	return (this->nbr);
}

void Fixed::setRawBits(int const raw)
{
	this->nbr = raw;
}

int Fixed::toInt( void ) const
{
	return (static_cast<int>(this->getRawBits() / (1 << this->frac)));
}

float Fixed::toFloat( void ) const
{	
	return (static_cast<float>(this->getRawBits() / static_cast<float>(1 << this->frac)));
}