/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:06:38 by root              #+#    #+#             */
/*   Updated: 2022/04/26 13:40:05 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//clang++ main.cpp zombieHorde.cpp Zombie.cpp

int main(void)
{
    int nbr = 4;
    int i = 0;
    Zombie* z = zombieHorde(nbr, "Zombie");
    while (i < nbr)
    {
        z[i++].announce();
    }
    delete []z;
}