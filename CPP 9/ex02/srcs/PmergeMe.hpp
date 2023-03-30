/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:11:37 by mortiz-d          #+#    #+#             */
/*   Updated: 2023/03/30 14:34:38 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

//Check strings of vectors
std::string 		get_whole_vector	( std::vector <int> list );
std::string 		get_whole_input		(  int argc, char **argv );

//Check data integrity
bool 				input_on_list		( std::vector<int> list, std::deque<int> list2 );
bool 				check_input			( std::string str, char c );
bool 				isIntNumber			( std::string str );

//Extract data
std::vector<int> 	extract_data		( std::string str, char c);

//Sorting
std::deque<int>		sort_deque			( std::deque <int> list );
std::vector<int> 	sort_vector			( std::vector <int> list );
