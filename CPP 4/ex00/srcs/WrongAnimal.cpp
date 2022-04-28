/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:55:25 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/28 13:21:22 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("test")
{
	return;
}

WrongAnimal::~WrongAnimal()
{
	return;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & ani)
{
	this->type = ani.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return(this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Evem though im the WrongAnimal i cannot make a sound :("<< std::endl;
}