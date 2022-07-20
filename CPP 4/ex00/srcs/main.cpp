/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:44:57 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 14:55:46 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

/*void leaks(void)
{
	system("leaks -q test");
}*/

int main (void)
{
	{
		Animal* animal = new Animal();
		Animal* dog = new Dog();
		Animal* cat = new Cat();
		WrongAnimal* wrongcat = new WrongCat();
		//atexit(leaks);

		std::cout << "The Dog should be a "<< dog->getType() << " " << std::endl;
		std::cout << "The Cat should be a " << cat->getType() << " " << std::endl;
		std::cout << "This animal should be a " << animal->getType() << " " << std::endl;
		std::cout << "This animal should be a " << wrongcat->getType() << " " << std::endl;
		cat->makeSound(); //will output the cat sound!
		dog->makeSound();
		wrongcat->makeSound();
		std::cout << " ___ Deep Copy ____ " << std::endl;
		*dog = *cat;
		std::cout << "The Dog changed into a "<< dog->getType() << " " << std::endl;
		delete dog;
		delete animal;
		delete cat;
		delete wrongcat;
	}
}