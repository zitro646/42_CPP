/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:07:23 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/05/02 09:42:52 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
    private:
        Weapon*		weapon;
        std::string name;
    public:
        HumanB(void);
        HumanB(std::string name);
        ~HumanB(void);
        void    setWeapon(Weapon &w);
        void    attack(void);
};

#endif