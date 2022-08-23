/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:18:12 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/08/23 19:03:58 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include<iomanip>
#include<iostream>
#include<vector>

class Span
{
	private:
	//Variables
	std::vector<int> _vector;
	// int *storage;
	unsigned int _size;
	// unsigned int filled;
	
	//Exceptions
	class OutofBoundsException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class StorageFullException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class StorageNotFullEnought : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	//Private Canonic
	Span();
	
	public:
	//Canonic Class
	Span(unsigned int s);
	Span(Span &spn);
	~Span();
	Span &operator=(const Span &spn);

	//Functions
	void addNumber(int x);
	int shortestSpan(void);
	int longestSpan(void);
	
	//Getters
	unsigned int getsize() const;
	int getstoredValue(unsigned int i) const;
};

//Output
std::ostream& operator<<(std::ostream& os, const Span &sp);

#endif