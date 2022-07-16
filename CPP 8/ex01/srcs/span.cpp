/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:48:08 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/13 17:24:11 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

//Canonial Class
Span::Span() : size(0) , filled(0)
{
	this->storage = new int[1];
	this->storage[0] = 0;
	return;
}

Span::Span(unsigned int s): size(s), filled(0)
{
	this->storage = new int[this->size];
	for (int x = 0; x < (int)this->size; x++)
		this->storage[x] = 0;
	return;
}

Span::Span(Span &spn) : size(0), filled(0)
{
	this->storage = new int[1];
	this->storage[0] = 0;
	*this = spn;
	return;
}

Span::~Span()
{
	delete this->storage;
	return;
}

Span & Span::operator=(const Span &spn)
{
	if (this == &spn)
		return *this;
	delete this->storage;
	this->size = spn.size;
	this->filled = spn.filled;
	this->storage = new int[this->size];
	for (int x = 0; x < (int)this->size; x++)
		this->storage[x] = spn.storage[x];
	return *this;
}


//Exceptions
void Span::OutofBoundsException(void) const
{
	throw std::invalid_argument ("Out of bounds");
}

void Span::StorageFullException(void) const
{
	throw std::invalid_argument ("Storage is full");
}

void Span::StorageNotFullEnought(void) const
{
	throw std::invalid_argument ("Not enoght numbers on storage");
}

//Functions
void Span::addNumber(int x)
{
	if (this->filled >= this->size)
		this->StorageFullException();
	this->storage[this->filled++] = x;
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
	if (this->filled < 2)
		this->StorageNotFullEnought();
	int shortest = span(this->storage[0],this->storage[1]);

	for (int x = 0;x < (int)this->filled;x++)
	{
		for (int y = 0;y < (int)this->filled;y++)
		{
			//std::cout << "x : "<< this->storage[x] << " | y : "<< this->storage[y] << " diff --> "<< span(this->storage[x],this->storage[y]) << std::endl;
			if (shortest > span(this->storage[x],this->storage[y]) && x != y)
				shortest = span(this->storage[x],this->storage[y]);
		}
	}
	return shortest;	
}

int Span::longestSpan(void)
{
	if (this->filled < 2)
		this->StorageNotFullEnought();
	int longest = span(this->storage[0],this->storage[1]);

	for (int x = 0;x < (int)this->filled;x++)
	{
		for (int y = 0;y < (int)this->filled;y++)
		{
			//std::cout << "x : "<< this->storage[x] << " | y : "<< this->storage[y] << " diff --> "<< span(this->storage[x],this->storage[y]) << std::endl;
			if (longest < span(this->storage[x],this->storage[y]) && x != y)
				longest = span(this->storage[x],this->storage[y]);
		}
	}
	return longest;	
}

//Getters
unsigned int Span::getsize() const
{
	return (this->size);
}

int Span::getstoredValue(unsigned int i) const
{
	if (i >= this->size)
		this->OutofBoundsException();
	return this->storage[i];
}


//output
std::ostream& operator<<(std::ostream& os, const Span &sp)
{
	os << "Size : " << sp.getsize() << std::endl;
	for (int x = 0; x < (int)sp.getsize();x++)
			os << "array["<< x <<"]" << " = " << sp.getstoredValue(x) << std::endl;
	return os;
}