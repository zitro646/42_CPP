/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:44:57 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/28 13:27:52 by mortiz-d         ###   ########.fr       */
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
	Animal* array[10];
	const Animal* dog = new Dog();
    const Animal* cat = new Cat();
	atexit(leaks);
	std::cout<<"____________________"<<std::endl;
	int i = 0;
	while (i < 5)
		array[i++] = new Dog();
	while (i < 10)
		array[i++] = new Cat();
	std::cout<<"____________________"<<std::endl;
	while (i > 0)
		delete array[--i];
	std::cout<<"____________________"<<std::endl;
	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;
    //delete cat;
}