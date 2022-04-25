/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:44:57 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/25 15:32:51 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void leaks(void)
{
	system("leaks -q test");
}


int main (void)
{
	const Animal* dog = new Dog();
    const Animal* cat = new Cat();
	//const Animal* animal = new Animal();
	atexit(leaks);
	std::cout<<"____________________"<<std::endl;
	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;
    //delete cat;
}