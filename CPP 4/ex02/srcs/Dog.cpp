/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:55:25 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 16:02:14 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout<<"Dog created"<<std::endl;
	return;
}

Dog::Dog(const Dog & dog)
{
	*this = dog;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout<<"Dog destroyed"<<std::endl;
	return;
}

Dog& Dog::operator=(Dog const & ani)
{
	if (&ani == this)
		return *this;
	this->type = ani.type;
	delete this->brain;
	this->brain = new Brain();
	*this->brain = *ani.brain;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof Woff barked the dog"<< std::endl;
}