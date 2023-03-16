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

template<typename Container>
PmergeMe<Container>::PmergeMe( void ) : duration(0)
{

  // std::cout << "Default constructor called" << std::endl;
  return ;
}

template<typename Container>
PmergeMe<Container>::PmergeMe( std::string str ) : duration(0)
{

  (void) str;
  // std::cout << "Parameter constructor called" << std::endl;
  return ;
  
}

template<typename Container>
PmergeMe<Container>::PmergeMe( const PmergeMe & var ) {
  
  // std::cout << "Copy constructor called" << std::endl;
  *this = var;
  return ;
  
}

template<typename Container>
PmergeMe<Container>::~PmergeMe( void ) {
  
  // std::cout << "Destructor called" << std::endl;
  return ;

}

template<typename Container>
PmergeMe<Container> & PmergeMe<Container>::operator=(const PmergeMe &tmp) {

  this->data = tmp.data;
  // std::cout << "Operator equalizer called" << std::endl;
  return (*this);
  
}

template<typename Container>
std::ostream &operator<<(std::ostream& os, const PmergeMe<Container> &tmp) {

  typedef typename Container::iterator iterator;
  Container aux = tmp.get_data();

	for (iterator it = aux.begin(); it != aux.end(); it++)
		os << *it << " ";

	return (os);
  
}

template<typename Container>
int PmergeMe<Container>::getIntNumber(std::string str)
{
	return ( atoi(str.c_str()));
}

template<typename Container>
bool PmergeMe<Container>::isIntNumber(std::string str)
{
	char * e;
	double		x;
	
	x = strtod(str.c_str(),&e);
	if (*e != '\0')
		return 0;
	if ( x < std::numeric_limits<int>::lowest() || \
	x > std::numeric_limits<int>::max())
  		return 0;
	if (fmod(x, 1.0) != 0)
        return 0;
	return 1;
}

template<typename Container>
void PmergeMe<Container>::extract_data	( std::string str , char c)
{
	std::stringstream	test(str);
	std::string			segment;
	
	while (std::getline(test,segment,c))
	{
		if (isIntNumber(segment) && segment != "")
			this->data.push_back(getIntNumber(segment));
	}
}

template<typename Container>
bool PmergeMe<Container>::check_input(std::string str, char c)
{
	std::stringstream 		test(str);
	std::string				segment;
	std::deque <int>			list;

	while (std::getline(test,segment,c))
	{
		if (!isIntNumber(segment))
			return 0;
	}
	return 1;
} 

template<typename Container>
void PmergeMe<Container>::sort_data( void )
{
  clock_t t1;
  clock_t t2;

  t1 = clock();
	std::sort (this->data.begin(), this->data.end());
  t2 = clock();
  this->duration = (static_cast<double>(t2 - t1) / CLOCKS_PER_SEC) * 1000000;
}

template<typename Container>
Container PmergeMe<Container>::get_data(void) const
{
  return ( this->data );
}

template<typename Container>
double  PmergeMe<Container>::get_duration	( void ) const 
{
  return ( this->duration );
}

template<typename Container>
void PmergeMe<Container>::get_time_stamp(void)
{
  return ( this->data );
}