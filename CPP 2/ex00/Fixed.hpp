/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:39:06 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/18 15:25:51 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

/*

 seeeeeeeemmmmmmmmmmmmmmmmmmmmmmm    meaning
31                              0    bit #

s = sign bit, e = exponent, m = mantissa

*/

# include <iostream>
	class Fixed
	{
		private:
			int nbr;
			const static int frac;
		public:
			Fixed();
			Fixed(const Fixed &copy);
			~Fixed();
			Fixed& operator=(Fixed &fixed);
			int getRawBits(void);
			void setRawBits(int const raw);
	};
	

#endif
