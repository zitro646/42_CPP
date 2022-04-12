/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:16:52 by root              #+#    #+#             */
/*   Updated: 2022/04/10 13:56:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (void)
{
    return;
}

Weapon::Weapon(std::string str) :type(str)
{
    return;
}

Weapon::~Weapon (void)
{
    return;
}

std::string Weapon::getType(void)
{
    return(this->type);
}

void Weapon::setType(std::string str)
{
    this->type = str;
}