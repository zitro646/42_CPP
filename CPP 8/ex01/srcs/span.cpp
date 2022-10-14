/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:48:08 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/10/14 14:58:27 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

//Canonial Class
Span::Span() : _size(0)
{
	return;
}

Span::Span(unsigned int s): _size(s)
{
	return;
}

Span::Span(Span &spn) : _size(0)
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
	std::cout << "Number added to storage "<< std::endl;
}

int Span::shortestSpan(void)
{
	int aux;
	int shortest;
	std::vector<int>::iterator iterator;
	std::vector<int>::iterator iterator_next;

	if (this->_vector.size() < 2)
		throw Span::StorageNotFullEnought();

	shortest = std::abs(this->_vector.begin() - this->_vector.end());
	for (iterator = this->_vector.begin();iterator != this->_vector.end();iterator++)
	{
		for (iterator_next = this->_vector.begin();iterator_next != this->_vector.end();iterator_next++)
		{
			aux = std::abs(*iterator - *iterator_next);
			if (shortest > aux && iterator != iterator_next)
				shortest = aux;
		}
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

	longest = std::abs(this->_vector.begin() - this->_vector.end());
	for (iterator = this->_vector.begin();iterator != this->_vector.end();iterator++)
	{
		for (iterator_next = this->_vector.begin();iterator_next != this->_vector.end();iterator_next++)
		{
			aux = std::abs(*iterator - *iterator_next);
			if (longest < aux)
				longest = aux;
		}
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