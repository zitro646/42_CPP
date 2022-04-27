/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:04:35 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/27 12:29:52 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return;
}

Cure::Cure(Cure const & materia)
{
	*this = materia;
	return;
}

Cure::~Cure(void)
{
	return;
}

Cure& Cure::operator=(const Cure &amateria)
{
	this->type = amateria.getType();
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout<< "heals "<< target.getName()<< " wounds"<< std::endl;
}