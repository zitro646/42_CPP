/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:44:57 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/26 16:57:05 by mortiz-d         ###   ########.fr       */
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
	Character *character = new Character("Juanjo");  
	character->equip(ice);
	character->equip(heal);
	character->use(0,*character);
	//delete cat;
}