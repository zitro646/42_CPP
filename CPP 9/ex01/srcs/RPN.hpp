/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:12:55 by mortiz-d          #+#    #+#             */
/*   Updated: 2023/03/30 14:13:03 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include <string>
#include <iostream>
#include <iomanip>
#include <list>
#include <sstream>
#include <fstream>
#include <cmath>

typedef std::list<std::string>::iterator iterator;

class	RPN {

	private:
	std::list <std::string> list;
	protected:
		class ErrorRPN : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	public:

		RPN 			( void );
		RPN 			( std::string str );
		RPN 			( const RPN & var );
		~RPN			( void );
		RPN &operator=	( const RPN &tmp);

		std::list <std::string> getlist	(void) const {return(this->list);};

		void 	fillRPN		( std::string str , char c);
		bool 	isOperator	(std::string str);
		bool 	isIntNumber	(std::string str);
		bool 	check_input	();

		std::string	get_answer	(void);
};
std::ostream &operator<<(std::ostream& os, const RPN &tmp);

#endif
