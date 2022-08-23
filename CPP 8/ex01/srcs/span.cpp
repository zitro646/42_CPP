/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:48:08 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/08/23 19:05:21 by mortiz-d         ###   ########.fr       */
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
	// delete this->storage;
	return;
}

Span & Span::operator=(const Span &spn)
{
	if (this == &spn)
		return *this;
	// delete this->storage;
	this->_size = spn._size;
	this->_vector = spn._vector;
	// this->filled = spn.filled;
	// this->storage = new int[this->size];
	// for (int x = 0; x < (int)this->size; x++)
	// 	this->storage[x] = spn.storage[x];
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

static int span(int d1, int d2)
{
	int aux_min;
	int aux_max;
	int i = 0;
	
	if (d1 < d2)
	{
		aux_max = d2;
		aux_min = d1;
	}
	else
	{
		aux_min = d2;
		aux_max = d1;
	}
	//std::cout << "min : "<< aux_min << " | max : "<< aux_max<< std::endl;
	for (int x = aux_min ; x <= aux_max; x++ )
		i = x;
	return (i - aux_min);

}

int Span::shortestSpan(void)
{
	if (this->_vector.size() < 2)
		throw Span::StorageNotFullEnought();
	int shortest = span(this->_vector[0],this->_vector[1]);

	for (int x = 0;x < (int)this->_vector.size();x++)
	{
		for (int y = 0;y < (int)this->_vector.size();y++)
		{
			//std::cout << "x : "<< this->storage[x] << " | y : "<< this->storage[y] << " diff --> "<< span(this->storage[x],this->storage[y]) << std::endl;
			if (shortest > span(this->_vector[x],this->_vector[y]) && x != y)
				shortest = span(this->_vector[x],this->_vector[y]);
		}
	}
	return shortest;	
}

int Span::longestSpan(void)
{
	if (this->_vector.size() < 2)
		throw Span::StorageNotFullEnought();
	int longest = span(this->_vector[0],this->_vector[1]);

	for (int x = 0;x < (int)this->_vector.size();x++)
	{
		for (int y = 0;y < (int)this->_vector.size();y++)
		{
			//std::cout << "x : "<< this->storage[x] << " | y : "<< this->storage[y] << " diff --> "<< span(this->storage[x],this->storage[y]) << std::endl;
			if (longest < span(this->_vector[x],this->_vector[y]) && x != y)
				longest = span(this->_vector[x],this->_vector[y]);
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