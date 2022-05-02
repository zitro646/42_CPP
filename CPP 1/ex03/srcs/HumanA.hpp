/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:07:23 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/05/02 09:42:39 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
    private:
        Weapon      &weapon;
        std::string name;
    public:
        HumanA (void);
        HumanA (std::string name, Weapon &Weapon);
        ~HumanA (void);
        void attack(void);
};

#endif