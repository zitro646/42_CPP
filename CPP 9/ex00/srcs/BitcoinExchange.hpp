
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelangelortizdelburgo <miguelangelortizdelburgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:15:25 by miguelangelortizdelburgo          #+#    #+#             */
/*   Updated: 2022/03/03 15:58:16 by miguelangelortizdelburgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <ctime>
#include <iomanip>

class	BitcoinExchange {

	private:
		std::string _origin;
		std::tm 	_date;
		double		_bit_value;
		std::string _error_detected;
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
		std::string get_string_date	(void)	const;

		void set_bit_value			(std::string str);
		void set_date				(std::string str);

		std::vector<std::string> split(std::string str, char c);
};
std::ostream &operator<<(std::ostream& os, const BitcoinExchange &tmp);

#endif
