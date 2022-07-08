/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base_B.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:42:32 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/06 15:50:08 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef BASE_B_H
#define BASE_B_H

#include "Base.hpp"

class Base_B:  public Base
{	
	public:
		Base_B();
		Base_B(const Base_B & base);
		~Base_B();
		Base_B operator=(const Base_B & caster);
		void info(void) const;
};


#endif