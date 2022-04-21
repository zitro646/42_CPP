/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:27:24 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/21 16:33:43 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap()
{
	std::cout << "DiamondTrap " << this->name <<" arrives to the party "<<std::endl;
	this->hp = 100;
	this->energy_points = 50;
	this->atack_dmg = 20;
	return;
}

DiamondTrap::DiamondTrap(std::string str)
{

}

DiamondTrap::~DiamondTrap()
{

}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & clap)
{

}
