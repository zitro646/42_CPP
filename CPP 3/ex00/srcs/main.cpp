/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:08:51 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/07 16:45:55 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
//clang++ main.cpp ClapTrap.cpp

/*
void leaks (void)
{
	system("leaks -q test");
}
*/
int main (void)
{
	//atexit(leaks);
	ClapTrap a	("Pepe");
	ClapTrap b	(a);
	ClapTrap c	("Jose");

	a.attack("Juan");
	a.takeDamage(3);
	a.beRepaired(3);
	a = c;
	
	return (0);
}