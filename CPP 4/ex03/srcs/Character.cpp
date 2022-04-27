/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:13:05 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/27 13:29:12 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter(), name("name"), inv_tam(0)
{
	for (int i = 0; i < 4 ; i++)
		this->inventory[i] = NULL;
	return;
}

Character::Character(std::string str) : ICharacter(), name(str), inv_tam(0)
{
	for (int i = 0; i < 4 ; i++)
		this->inventory[i] = NULL;
	return;
}

Character::Character(const Character & cha)
{
	*this = cha;
	return;
}

Character::~Character()
{
	for (int i = 0;i < this->inv_tam; i++)
		delete this->inventory[i];
	return;
}

Character & Character::operator=(const Character &cha)
{
	this->name = cha.getName();
	for (int i = 0; i < 4 ; i++)
		this->inventory[i] = cha.inventory[i];
	this->inv_tam = cha.inv_tam;
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (this->inv_tam < 4)
	{
		this->inventory[this->inv_tam] = m;
		this->inv_tam++;
		std::cout<< "I have equiped myself with "<<m->getType()<<std::endl;
	}
	else
		std::cout<< "Shit! i have no space left for more Materia!"<<std::endl;
}

void Character::unequip(int idx)
{
	if (idx > this->inv_tam - 1 || idx < 0 )
		std::cout<< "I have nothing to drop from "<< idx<<std::endl;
	else
	{
		std::cout<< "I have dropped "<< idx<<std::endl;
		for (int i = idx;i < 3;i++)
		{
			this->inventory[i] = this->inventory[i + 1];	
		}
		this->inv_tam--;
		this->inventory[3] = NULL;
	}

}

void Character::use(int idx, ICharacter& target)
{
	if (idx > this->inv_tam - 1 || idx < 0 )
		std::cout<< "I have nothing to use there!"<<std::endl;
	else
		this->inventory[idx]->use(target);
}
