/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:55:25 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/28 16:21:15 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	return;
}

Dog::~Dog()
{
	return;
}

Dog& Dog::operator=(Dog const & ani)
{
	this->type = ani.type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof Woff barked the dog"<< std::endl;
}