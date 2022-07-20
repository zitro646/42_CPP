/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:45:34 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 15:29:00 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include<iomanip>
#include<iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal & ani);
	virtual ~Animal();
	virtual Animal& operator=(Animal const & clap);
	virtual void makeSound(void) const;
	std::string getType(void) const;
};


#endif