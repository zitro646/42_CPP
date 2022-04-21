/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:39:06 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/21 12:14:43 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
	class Fixed
	{
		private:
			int nbr;
			const static int frac;
		public:
			Fixed();
			Fixed(int nbr);
			Fixed(float nbr);
			Fixed(const Fixed &copy);
			~Fixed();
			Fixed& operator=(const Fixed &fixed);
			int getRawBits(void) const;
			void setRawBits(int const raw);
			float toFloat( void ) const;
			int toInt( void ) const;
			//MIN-MAX Operators
			static Fixed min(const Fixed &fixed, const Fixed &fixed2);
			static Fixed max(const Fixed &fixed, const Fixed &fixed2);
			//Comparison Operators
			bool operator!=(const Fixed &fixed2);
			bool operator==(const Fixed &fixed2);
			bool operator>(const Fixed &fixed2);
			bool operator<(const Fixed &fixed2);
			bool operator>=(const Fixed &fixed2);
			bool operator<=(const Fixed &fixed2);
			//Arithmetic Operators
			Fixed operator-(const Fixed &fixed2) const;
			Fixed operator+(const Fixed &fixed2) const;
			Fixed operator*(const Fixed &fixed2) const;
			Fixed operator/(const Fixed &fixed2) const;
			//Pre Increase/Decrease Operators
			Fixed &operator--(void);
			Fixed &operator++(void);

			//Post Increase/Decrease Operators
			Fixed operator--(int);
			Fixed operator++(int);
	};
	
	

	
	
	
	
	//Output Operator
	std::ostream &operator<<(std::ostream& os, const Fixed &f); //, const Fixed &f
	

#endif
