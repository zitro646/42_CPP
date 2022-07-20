/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:32:03 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 14:14:14 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	return;
}

WrongCat::WrongCat(const WrongCat & w_ani)
{
	*this = w_ani;
	return;
}

WrongCat::~WrongCat()
{
	return;
}

WrongCat& WrongCat::operator=(WrongCat const & ani)
{
	if (&ani == this)
		return *this;
	this->type = ani.type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow meowed the wrongcat"<< std::endl;
}