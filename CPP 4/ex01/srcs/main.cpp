/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:44:57 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 15:58:51 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void leaks(void)
{
	system("leaks -q test");
}


int main (void)
{
	atexit(leaks);
	{
		// Animal* array[10];
		
		// std::cout<<"____________________"<<std::endl;
		// int i = 0;
		// while (i < 5)
		// 	array[i++] = new Dog();
		// while (i < 10)
		// 	array[i++] = new Cat();
		// std::cout<<"____________________"<<std::endl;
		// while (i > 0)
		// 	delete array[--i];
		// std::cout<<"____________________"<<std::endl;
	}
	{
		// Animal* dog = new Dog();
		// Animal* dog3 = new Dog();
		// Animal* cat = new Cat();	
		
		// *dog3 = *dog;
		// std::cout<<"Dog 3 is a "<< dog3->getType()<<std::endl;
		// *dog3 = *dog;
		// std::cout<<"Dog 3 is a "<< dog3->getType()<<std::endl;
		// delete dog;
		// delete cat;
		// delete dog3;
	}
	{
		Dog _dog1;
		Dog _dog2;
		Cat _cat1;
		Cat _cat2;
		
		_dog1 = _dog2;
		_cat1 = _cat2;
	}
}