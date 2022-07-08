/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:45:34 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/25 13:28:37 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include"Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog & dog);
	~Dog();
	Dog& operator=(Dog const & clap);
	void makeSound(void) const;
};


#endif