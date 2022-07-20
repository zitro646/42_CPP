/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:55:25 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 14:47:26 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	return;
}

Dog::Dog(const Dog & dog)
{
	*this = dog;
}

Dog::~Dog()
{
	return;
}

Dog& Dog::operator=(Dog const & ani)
{
	if (&ani == this)
		return *this;
	this->type = ani.type;
	std::cout << "deep dog copy"<< std::endl;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof Woff barked the dog"<< std::endl;
}