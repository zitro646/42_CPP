/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:57:49 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/25 17:02:30 by mortiz-d         ###   ########.fr       */
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

std::string const & getType() const
{
	return (this->type);
}
	