/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 12:18:57 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/22 17:40:07 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap " << this->name <<" arrives to the party "<<std::endl;
	this->hp = 100;
	this->energy_points = 100;
	this->atack_dmg = 30;
	return;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	std::cout << "LLama al compuesto (FragTrap)"<<std::endl;
	std::cout << "FragTrap " << this->name <<" arrives to the party "<<std::endl;
	this->hp = 100;
	this->energy_points = 50;
	this->atack_dmg = 20;
	return;
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name <<" leaves the party "<<std::endl;
	return;
}

FragTrap& FragTrap::operator=(FragTrap const & scav)
{
	std::cout << "FragTrap " << this->name <<" is now "<< scav.name<<std::endl;
	this->name = scav.name;
	this->hp = scav.hp;
	this->energy_points = scav.energy_points;
	this->atack_dmg = scav.atack_dmg;
	return (*this);
	
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name <<" high fives!"<<std::endl;
}