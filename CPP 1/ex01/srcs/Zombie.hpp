/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:26:40 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/05/02 09:41:49 by mortiz-d         ###   ########.fr       */
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