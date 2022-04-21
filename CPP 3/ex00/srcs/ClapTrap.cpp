/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:54:57 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/21 15:03:14 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//__________________________________________________
//				Canonical Class						|
//__________________________________________________

//Constructors
ClapTrap::ClapTrap() : name("without name"), hp(10) , energy_points(10) , atack_dmg(0)
{
	std::cout << "Claptrap " << this->name <<" arrives to the party "<<std::endl;
	return;
}

ClapTrap::ClapTrap(std::string str) : name(str), hp(10) , energy_points(10) , atack_dmg(0)
{
	std::cout << "Claptrap " << this->name <<" arrives on the party "<<std::endl;
	return;
}

//Destructor
ClapTrap::~ClapTrap()
{

	std::cout << "Claptrap " << this->name <<" leaves the party "<<std::endl;
	return;
}

//Operator
ClapTrap& ClapTrap::operator=(ClapTrap const & clap)
{
	std::cout << "Claptrap " << this->name <<" is now "<< clap.name<<std::endl;
	this->name = clap.name;
	this->hp = clap.hp;
	this->energy_points = clap.energy_points;
	this->atack_dmg = clap.atack_dmg;
	return (*this);
}

//__________________________________________________
//					Funtions						|
//__________________________________________________

void ClapTrap::attack(std::string const & target)
{
	std::cout << "Claptrap " << this->name <<" attacks " << target;
	std::cout << ", causing "<< this->atack_dmg << " points of damage!" <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hp -= amount;
	std::cout << "Claptrap " << this->name;
	std::cout << " takes " << amount << " of damage"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hp += amount;
	std::cout << "Claptrap " << this->name;
	std::cout << " recovers " << amount << " points of HP";
	std::cout << " and has " << this->energy_points << " energy points"<<std::endl;
}

//__________________________________________________
//					Gets && Sets					|
//__________________________________________________


void ClapTrap::set_hp(int amount)
{
	this->hp = amount;
}

void ClapTrap::set_energy(int amount)
{
	this->energy_points = amount;
}

void ClapTrap::set_atack(int amount)
{
	this->atack_dmg = amount;
}

int ClapTrap::get_hp(void)
{
	return (this->hp);
}

int ClapTrap::get_energy(void)
{
	return(this->energy_points);
}

int ClapTrap::get_atack(void)
{
	return(this->atack_dmg);
}

