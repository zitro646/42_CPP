/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:08:51 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/21 14:32:24 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
//clang++ main.cpp ClapTrap.cpp

int main (void)
{
	ClapTrap a	("Pepe");
	ClapTrap b	("Jose");

	a.attack("Juan");
	a.takeDamage(3);
	a.beRepaired(3);
	a = b;
	return (0);
}