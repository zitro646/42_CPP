/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:27:24 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/07 17:03:46 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap("without name"), ScavTrap("without name")
{
	this->name = "without name";
	this->ClapTrap::name = "without name_clap_name";
	this->hp = FragTrap::hp;
	this->energy_points = ScavTrap::energy_points;
	this->atack_dmg = FragTrap::atack_dmg;
	std::cout << "DiamondTrap " << this->name <<" arrives to the party "<<std::endl;
	return;
}


DiamondTrap::DiamondTrap(std::string str) : FragTrap(str), ScavTrap(str)
{
	//std::cout << "LLama al compuesto "<<std::endl;
	this->name = str;
	this->ClapTrap::name = str + "_clap_name";
	this->hp = FragTrap::hp;
	this->energy_points = ScavTrap::energy_points;
	this->atack_dmg = FragTrap::atack_dmg;
	std::cout << "DiamondTrap " << this->name <<" arrives to the party "<<std::endl;
	return;
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name <<" leaves the party "<<std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & diam)
{
	std::cout << "DiamondTrap " << this->ScavTrap::name <<" is now "<< diam.ScavTrap::name<<std::endl;
	this->name = diam.ScavTrap::name;
	this->hp = diam.ScavTrap::hp;
	this->energy_points = diam.ScavTrap::energy_points;
	this->atack_dmg = diam.ScavTrap::atack_dmg;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Hi im " << this->name << " and my ClapTrap name is "<< this->ClapTrap::name << std::endl;
}