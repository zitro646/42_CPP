/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:26:40 by root              #+#    #+#             */
/*   Updated: 2022/04/08 13:13:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie(void);
        Zombie (std::string str);
        ~Zombie (void);
        void setZombiename(std::string str);
        void announce(void);
    private : 
        std::string name;
};

Zombie* zombieHorde(int nbr, std::string str);


#endif