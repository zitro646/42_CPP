/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:04:35 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/26 16:59:34 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	return;
}

Ice::Ice(Ice const & materia)
{
	*this = materia;
	return;
}

Ice& Ice::operator=(const Ice &amateria)
{
	this->type = amateria.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout<< "* shoots an ice bolt at "<< target.getName()<< std::endl;
}