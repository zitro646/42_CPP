/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base_C.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:43:00 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/06 15:50:17 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_C_H
#define BASE_C_H

#include "Base.hpp"

class Base_C :  public Base
{	
	public:
		Base_C();
		~Base_C();
		void info(void) const;
};

#endif