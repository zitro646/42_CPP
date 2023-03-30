/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:47:05 by mortiz-d          #+#    #+#             */
/*   Updated: 2023/03/30 13:48:40 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <string>
#include <iostream>
#include <map>
#include <sstream>
#include <ctime>
#include <iomanip>



class	BitcoinExchange {

	private:
		std::string _origin;
		std::tm 	_date;
		std::time_t	_unix_date;
		double		_bit_value;
		std::string _error_detected;
		
		int get_origin_size(std::string str, char del);
		void set_bit_value			(std::string str);
		void set_date				(std::string str);
		std::string trim(std::string str , std::string to_trim);
	
	public:

		BitcoinExchange 			( void );
		BitcoinExchange 			( std::string str , char del );
		BitcoinExchange 			( const BitcoinExchange & var );
		~BitcoinExchange			( void );
		BitcoinExchange &operator=	(const BitcoinExchange &tmp);

		std::string get_origin		(void)	const	{return(this->_origin);};
		double 		get_bit_value	(void)	const	{return(this->_bit_value);};
		std::tm		get_date		(void)	const 	{return(this->_date);};
		std::string	get_error		(void)	const 	{return(this->_error_detected);};
		std::time_t get_unix_date 	(void)	const	{return(this->_unix_date);};
		std::string get_string_date	(void)	const;
};
std::ostream &operator<<(std::ostream& os, const BitcoinExchange &tmp);

#endif
