/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:44:57 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/27 13:11:46 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

void leaks(void)
{
	system("leaks -q test");
}


int main (void)
{
	AMateria *ice = new Ice();
	AMateria *heal = new Cure();
	AMateria *ice2 = ice->clone();
	AMateria *heal2 = heal->clone();
	AMateria *heal3 = heal->clone();
	Character *character = new Character("Miguel"); 

	atexit(leaks);
	std::cout << "Character "<<character->getName() <<" starts equiping himself" << std::endl;
	character->equip(ice);
	character->equip(ice2);
	character->equip(heal);
	character->equip(heal2);
	character->equip(heal3);
	std::cout << std::endl << "Now that character "<<character->getName() <<" is ready he's going to use ... " << std::endl;
	character->use(0,*character);
	character->use(1,*character);
	character->use(2,*character);
	character->use(3,*character);
	character->use(5,*character);
	std::cout << std::endl << "Now that he has used everything he's going to unequip it" << std::endl;
	character->unequip(3);
	character->unequip(2);
	character->unequip(1);
	character->unequip(0);
	character->unequip(0);
	delete character;
	delete ice;
	delete ice2;
	delete heal;
	delete heal2;
	delete heal3;
}