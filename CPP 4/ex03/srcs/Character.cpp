/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:13:05 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/26 15:56:54 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("name"), inv_tam(0)
{
	for (int i = 0; i < 4 ; i++)
		this->inventory[i] = NULL;
	return;
}

Character::Character(std::string str) : name(str), inv_tam(0)
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
	}
	else
		std::cout<< "Shit! i have no space left for more Materia!"<<std::endl;
}

void Character::unequip(int idx)
{
	if (idx > this->inv_tam - 1 || idx < 0 )
		std::cout<< "I have nothing to drop there!"<<std::endl;
	else
	{
		for (int i = idx;i < 4;i++)
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
