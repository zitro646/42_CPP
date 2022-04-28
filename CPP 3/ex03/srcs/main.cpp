/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:08:51 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/28 16:41:08 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
//clang++ main.cpp ClapTrap.cpp

int main (void)
{
	/*
	std::cout << "______________________________"<< std::endl;
	ClapTrap a("Pepe");
	
	a.attack("Objetivo de A");
	a.takeDamage(3);
	a.beRepaired(3);
	std::cout << "______________________________"<< std::endl;
	ScavTrap b("Pedro");
	b.guardGate();
	b.attack("Objetivo de B");
	std::cout << "______________________________"<< std::endl;
	FragTrap c("Paco");
	c.highFivesGuys();
	c.attack("Objetivo de C");*/
	std::cout << "______________________________"<< std::endl;
	DiamondTrap d("test");
	DiamondTrap d2("test2");
	d2 = d;
	std::cout << "______________________________"<< std::endl;
	d.highFivesGuys();
	d.guardGate();
	d.attack("Objetivo de D");
	d2.guardGate();
	std::cout << "______________________________"<< std::endl;
	return (0);
}