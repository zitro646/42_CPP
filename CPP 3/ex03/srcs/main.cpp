/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:08:51 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/07 17:10:15 by mortiz-d         ###   ########.fr       */
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
	std::cout << "______________________________"<< std::endl;
	DiamondTrap d("Juancho");
	DiamondTrap d2("Juliao");
	d2 = d;
	std::cout << "______________________________"<< std::endl;
	d.highFivesGuys();
	d.guardGate();
	d.whoAmI();
	d.attack("Objetivo de D");
	d2.guardGate();
	std::cout << "______________________________"<< std::endl;
	return (0);
}