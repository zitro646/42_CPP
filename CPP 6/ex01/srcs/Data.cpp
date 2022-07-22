/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:40:44 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/06 15:44:17 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(std::string str) :name(str)
{
	return;
} 

Data::Data(Data &data)
{
	*this = data;
	return;
}

Data::Data(void) : name("")
{
	return;
}

Data::~Data()
{
	return;
}

Data& Data::operator=(Data const & data)
{
	this->name = data.name;
	std::cout << "TEST THIS " << this << std::endl;
	std::cout << "Data this		: " << this << std::endl;
	//std::cout << "Data data		: " << data << std::endl;
	return *this;
}

void Data::salute(void)
{
	if (this->name == "")
		std::cout << "I have no name :("<< std::endl;
	else
		std::cout << "My name is "<< this->name<< std::endl;
	return;
}

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}


Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
