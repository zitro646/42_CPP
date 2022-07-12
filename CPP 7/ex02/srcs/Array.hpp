/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:01:52 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/12 01:50:20 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>


template<class T>
class Array
{
	public:
		Array(void);
		Array(unsigned int s);
		Array(Array const &array);
		~Array() ;
		Array & operator= (Array const & ary);
		T &operator[](int i);
		unsigned int getsize(void) const ;
		T getstoragepos(int x) const ;
		T *getstoragepointer(void) const;
	
	private:
		unsigned int size;
		T * storage;
		
		void OutofBoundsException(void) const;
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T> &f);

/*
template<class T>
class Array
{
	public:
		Array(void) : size(0)
		{
			this->storage = new T[1];
			this->storage[0] = 0;
		}
		
		Array(unsigned int s) : size(s)
		{
			this->storage = new T[s];
			return;
		}
		
		Array(Array const &array)
		{
			this->storage = new T[1];
			*this = array;
			return;
		}

		~Array() 
		{
			delete[] this->storage;
			return; 
		}

		Array & operator= (Array const & ary)
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
		
		T &operator[](int i)
		{
			if (i < 0 || i >= (int)this->size)
				OutofBoundsException();
			return this->storage[i];
		}
		
		unsigned int getsize(void) const {return this->size;}
		
		T getstoragepos(int x) const 
		{
			if (x < 0 || x >= (int)this->size)
				OutofBoundsException();
			return this->storage[x];
		}
		
		T *getstoragepointer(void) const {return this->storage;}
	
	private:
		unsigned int size;
		T * storage;
		
		void OutofBoundsException(void) const
		{
			std::cout << "Out of bounds" <<std::endl;
			throw std::invalid_argument("Out of bounds");
		}
};

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
*/
#endif