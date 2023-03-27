/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.ipp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:15:25 by miguelangelortizdelburgo          #+#    #+#             */
/*   Updated: 2022/12/02 16:41:42 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<class Container>
PmergeMe::PmergeMe( void )
{

  // std::cout << "Default constructor called" << std::endl;
  return ;
}

template<class Container>
PmergeMe::PmergeMe( std::string str )
{

  (void) str;
  // std::cout << "Parameter constructor called" << std::endl;
  return ;
  
}

template<class Container>
PmergeMe::PmergeMe( const PmergeMe & var ) {
  
  // std::cout << "Copy constructor called" << std::endl;
  *this = var;
  return ;
  
}

template<class Container>
PmergeMe::~PmergeMe( void ) {
  
  // std::cout << "Destructor called" << std::endl;
  return ;

}

template<class Container>
PmergeMe & PmergeMe::operator=(const PmergeMe<Container> &tmp) {
  (void)tmp;
  // std::cout << "Operator equalizer called" << std::endl;
  return (*this);
  
}

template<class Container>
std::ostream &operator<<(std::ostream& os, const PmergeMe &tmp) {

	(void)tmp;
	return (os);
}