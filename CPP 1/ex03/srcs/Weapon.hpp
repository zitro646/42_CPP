/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:12:50 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/05/02 09:43:16 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon{
    private:
        std::string type;
    public:
        Weapon (void);
        Weapon (std::string str);
        ~Weapon (void);
        const std::string getType(void);
        void setType(std::string str);
};

#endif