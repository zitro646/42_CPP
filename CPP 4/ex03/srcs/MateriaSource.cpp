/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:30:06 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/28 16:57:41 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : learn_tam(0)
{
	for (int i = 0; i < 4 ; i++)
		this->learned[i] = NULL;
	return;
}

MateriaSource::MateriaSource(const MateriaSource &source)
{
	*this = source;
	return;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < learn_tam ; i++)
		delete this->learned[i];
	return;
}

MateriaSource MateriaSource::operator=(const MateriaSource &source)
{
	for (int i = 0; i < 4 ; i++)
		this->learned[i] = source.learned[i];
	this->learn_tam = source.learn_tam;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* mat)
{
	if (this->learn_tam <= 3)
	{
		this->learned[learn_tam] = mat;
		this->learn_tam++;
	}
	else
	{
		delete mat;
		std::cout << "I cannot learn anymore Materia"<< std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;

	i = 0;
	for (int i= 0; i < 4; i++)
	{
		if (this->learned[i]->getType() == type)
			return (this->learned[i]->clone());
	}
	return (NULL);
}

