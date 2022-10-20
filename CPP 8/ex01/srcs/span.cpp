/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:48:08 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/10/20 16:57:20 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

//Canonial Class
Span::Span() : _size(0) , _actual_size(0)
{
	return;
}

Span::Span(unsigned int s): _size(s) , _actual_size(0)
{
	return;
}

Span::Span(Span &spn) : _size(0) , _actual_size(0)
{
	spn = *this;
	return;
}

Span::~Span()
{
	return;
}

Span & Span::operator=(const Span &spn)
{
	if (this == &spn)
		return *this;
	this->_size = spn._size;
	this->_vector = spn._vector;
	this->_actual_size = spn._actual_size;
	return *this;
}


//Exceptions
const char* Span::OutofBoundsException::what() const throw()
{
	return ( "Out of bounds");
}
const char* Span::StorageFullException::what() const throw()
{
	return ( "Storage is full");
}
const char* Span::StorageNotFullEnought::what() const throw()
{
	return ( "Not enoght numbers on storage");
}

//Functions
void Span::addNumber(int x)
{
	if (this->_vector.size() >= this->_size)
		throw Span::StorageFullException();
	this->_vector.push_back(x);
	this->_actual_size++;
	std::cout << "Number added to storage "<< std::endl;
}

void Span::addmultipleNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	int counter;

	counter = 0;
	for (std::vector<int>::iterator aux = start; aux != end;aux++)
		counter++;
	if (this->_vector.size() + counter >= this->_size)
		throw Span::StorageFullException();
	for (std::vector<int>::iterator aux = start; aux != end;aux++)
	{
		this->_vector.push_back(*aux);
		this->_actual_size++;
	}
	std::cout << "Multiple numbers added to storage "<< std::endl;
}

int Span::shortestSpan(void)
{
	int aux;
	int shortest;
	std::vector<int>::iterator iterator;
	std::vector<int>::iterator iterator_next;

	if (this->_vector.size() < 2)
		throw Span::StorageNotFullEnought();

	iterator = this->_vector.begin();
	shortest = std::abs(*iterator - *(iterator + 1));
	for (int i = 0; i < (int)this->_actual_size;i++)
	{
		iterator_next = this->_vector.begin();
		for (int j = 0; j < (int)this->_actual_size;j++)
		{
			aux = std::abs(*iterator - *iterator_next);
			if (shortest > aux && iterator != iterator_next)
				shortest = aux;
		}
		iterator++;
	}
	return shortest;	
}

int Span::longestSpan(void)
{
	int aux;
	int longest;
	std::vector<int>::iterator iterator;
	std::vector<int>::iterator iterator_next;

	if (this->_vector.size() < 2)
		throw Span::StorageNotFullEnought();

	iterator = this->_vector.begin();
	longest = std::abs(*iterator - *(iterator + 1));
	for (int i = 0; i < (int)this->_actual_size;i++)
	{
		iterator_next = this->_vector.begin();
		for (int j = 0; j < (int)this->_actual_size;j++)
		{
			aux = std::abs(*iterator - *iterator_next);
			if (longest < aux)
				longest = aux;
		}
		iterator++;
	}

	return longest;
}

//Getters
unsigned int Span::getsize() const
{
	return (this->_size);
}

int Span::getstoredValue(unsigned int i) const
{
	if (i >= this->_size)
		throw Span::OutofBoundsException();
	return this->_vector[i];
}


//output
std::ostream& operator<<(std::ostream& os, const Span &sp)
{
	os << "Size : " << sp.getsize() << std::endl;
	for (int x = 0; x < (int)sp.getsize();x++)
			os << "array["<< x <<"]" << " = " << sp.getstoredValue(x) << std::endl;
	return os;
}