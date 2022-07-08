/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:36:02 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/07 16:58:37 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Scavrap " << this->name <<" arrives to the party "<<std::endl;
	this->hp = 100;
	this->energy_points = 50;
	this->atack_dmg = 20;
	return;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	//std::cout << "LLama al compuesto (ScavTrap)"<<std::endl;
	std::cout << "Scavrap " << this->name <<" arrives to the party "<<std::endl;
	this->hp = 100;
	this->energy_points = 50;
	this->atack_dmg = 20;
	return;
}

ScavTrap::ScavTrap(const ScavTrap & scav)
{
	*this = scav;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavrap " << this->name <<" leaves the party "<<std::endl;
	return;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & scav)
{
	std::cout << "Scavrap " << this->name <<" is now "<< scav.name<<std::endl;
	if (&scav == this)
		return *this;
	this->name = scav.name;
	this->hp = scav.hp;
	this->energy_points = scav.energy_points;
	this->atack_dmg = scav.atack_dmg;
	return (*this);
	
}

void  ScavTrap::guardGate(void)
{
	std::cout << "Scavrap " << this->name <<" have enterred in Gate keeper mode"<<std::endl;
}
