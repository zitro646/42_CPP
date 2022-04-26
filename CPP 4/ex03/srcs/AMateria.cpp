/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:57:49 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/26 17:01:36 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("none")
{
	return;
}

AMateria::AMateria(std::string const & str) : type(str)
{
	return;
}

AMateria::~AMateria()
{
	return;
}

AMateria & AMateria::operator=(const AMateria &ama)
{
	this->type = ama.type;
	return (*this);
}


std::string const & AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout<< "does unspecific magic to "<< target.getName()<< std::endl;
	return;
}
	