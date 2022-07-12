/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.ipp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 01:30:29 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/12 01:40:06 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : size(0)
{
	this->storage = new T[1];
	this->storage[0] = 0;
}

template<typename T>
Array<T>::Array(unsigned int s) : size(s)
{
	this->storage = new T[s];
	return;
}
		
template<typename T>
Array<T>::Array(Array const &array)
{
	this->storage = new T[1];
	*this = array;
	return;
}

template<typename T>
Array<T>::~Array() 
{
	delete[] this->storage;
	return; 
}


template<typename T>
Array<T> & Array<T>::operator= (Array<T> const & ary)
{
	if (this == &ary)
		return *this;
	delete[] this->storage;
	this->storage = new T[ary.getsize()];
	this->size = ary.getsize();
	for (int x = 0; x < (int)this->size;x++)
		this->storage[x] = ary.getstoragepos(x);
	return *this;
}

template<typename T>
T & Array<T>::operator[](int i)
{
	if (i < 0 || i >= (int)this->size)
		OutofBoundsException();
	return this->storage[i];
}

template<typename T>
unsigned int Array<T>::getsize(void) const 
{
	return this->size;
}

template<typename T>
T Array<T>::getstoragepos(int x) const 
{
	if (x < 0 || x >= (int)this->size)
		OutofBoundsException();
	return this->storage[x];
}

template<typename T>
T * Array<T>::getstoragepointer(void) const {return this->storage;}



template<typename T>
void Array<T>::OutofBoundsException(void) const
{
	std::cout << "Out of bounds" <<std::endl;
	throw std::invalid_argument("Out of bounds");
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T> &f) 
{
	os << "ARRAY : " << std::endl;
	os << "ARRAY storage point: " << f.getstoragepointer() << std::endl;
	os << "size [" << f.getsize() << "]"<< std::endl;
	for (int x = 0; x < (int)f.getsize();x++)
			os << "array["<< x <<"]" << " = " << f.getstoragepos(x) << std::endl;
	return (os);
}