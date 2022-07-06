/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base_A.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:42:38 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/06 15:50:51 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_A_H
#define BASE_A_H

#include "Base.hpp"

class Base_A : public Base
{
	public:
		Base_A();
		~Base_A();
		void info(void) const;
};

#endif