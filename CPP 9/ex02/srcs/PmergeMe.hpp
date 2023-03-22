
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelangelortizdelburgo <miguelangelortizdelburgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:15:25 by miguelangelortizdelburgo          #+#    #+#             */
/*   Updated: 2022/03/03 15:58:16 by miguelangelortizdelburgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <string>
#include <iostream>
#include <deque>
#include <forward_list>
#include <vector>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <cmath>
#include <chrono>
#include <ctime>

// typedef std::deque<int>::iterator iterator;

template<class Container>
class	PmergeMe {

	// typedef typename Container::iterator iterator;
	private:
		Container 	data;
		double		duration;
	public:

		PmergeMe 			( void );
		PmergeMe 			( std::string str );
		PmergeMe 			( const PmergeMe & var );
		~PmergeMe			( void );
		PmergeMe &operator=	( const PmergeMe &tmp );

		Container 	get_data		( void ) const;
		double		get_duration	( void ) const ;

		bool check_input		( std::string str, char c );
		int	 getIntNumber		( std::string str );
		bool isIntNumber		( std::string str );
		void extract_data		( std::string str, char c );
		void get_time_stamp 	( void );
		void sort_data			( void );
};

template<typename Container>
std::ostream &operator<<(std::ostream& os, const PmergeMe<Container> &tmp);

#endif
