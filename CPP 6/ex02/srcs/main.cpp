/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:43:15 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/08/23 16:41:18 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "Base_A.hpp"
#include "Base_B.hpp"
#include "Base_C.hpp"

#include <limits>

void leaks(void)
{
	system("leaks -q test");
}

Base *generate(void)
{
	int ramdon;
	int i;
	Base *ret[3] = {new Base_A() , new Base_B() , new Base_C()};

	i = 0;
	std::srand(std::time(0));
	ramdon = (rand() % 3) + 1;
	while (i < 3)
	{
		if (i != (ramdon - 1))
			delete ret[i];
		i++;
	}
	return ret[ramdon - 1];
}

void identify(Base *p)
{
	bool base[3] = { (dynamic_cast<Base_A*>(p)) , (dynamic_cast<Base_B*>(p)) , (dynamic_cast<Base_C*>(p))};
	std::string type[3] = {"A", "B" ,"C"};
	int i;
	
	i = 0;
	while (i < 3)
	{
		if (base[i] == true)
			break;
		i++;
	}
	if (i == 3)
		std::cout << "This pointer is not a specific son of Base"<< std::endl;
	else
		std::cout << "This pointer is Base "<< type[i] <<std::endl;
}

void identify(Base &p)
{
	bool base[3] = { (dynamic_cast<Base_A*>(&p)) , (dynamic_cast<Base_B*>(&p)) , (dynamic_cast<Base_C*>(&p))};
	std::string type[3] = {"A", "B" ,"C"};
	int i;
	
	i = 0;
	while (i < 3)
	{
		if (base[i] == true)
			break;
		i++;
	}
	if (i == 3)
		throw std::invalid_argument( "This pointer is not a specific son of Base" );
	else
		std::cout << "This pointer is Base "<< type[i] <<std::endl;
}

int main (void)
{
	// atexit(leaks);
	Base *base = generate();
	Base *nulo = NULL;

	std::cout <<std::endl << "Identificamos 'base' como referencia y puntero"<<std::endl;
	std::cout << "_________________________________________________________"<<std::endl;
	identify(base);
	try
	{
		identify(*base);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	std::cout <<std::endl << "Identificamos 'nulo' como referencia y puntero"<<std::endl;
	std::cout << "_________________________________________________________"<<std::endl;
	identify(nulo);
	try
	{
		identify(*nulo);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error -> "<< e.what() << '\n';
	}
	
	delete base;
	return (0);
}