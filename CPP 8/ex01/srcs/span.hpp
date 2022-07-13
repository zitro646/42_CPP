/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:18:12 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/13 16:55:46 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include<iomanip>
#include<iostream>


class Span
{
	private:
	//Variables
	int *storage;
	unsigned int size;
	unsigned int filled;
	
	//Exceptions
	void OutofBoundsException(void) const;
	void StorageFullException(void) const;
	void StorageNotFullEnought(void) const;

	public:
	//Canonic Class
	Span();
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