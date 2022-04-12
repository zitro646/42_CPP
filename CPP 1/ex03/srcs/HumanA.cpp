/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:31:04 by root              #+#    #+#             */
/*   Updated: 2022/04/12 19:18:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &w) : weapon(w), name(str) 
{
	return;
}

HumanA::~HumanA (void)
{
	return;
}

void HumanA::attack(void)
{
	std::cout<<this->name<<" attacks with his "<<this->weapon.getType()<<std::endl;
}