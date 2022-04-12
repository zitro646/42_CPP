/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:06:38 by root              #+#    #+#             */
/*   Updated: 2022/04/08 13:27:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//clang++ main.cpp zombieHorde.cpp Zombie.cpp

int main(void)
{
    int nbr = 23;
    int i = 0;
    Zombie* z = zombieHorde(nbr, "Enana");
    std::cout<<"Test"<<std::endl;
    while (i < nbr)
    {
        z[i++].announce();
    }
    delete []z;
}