/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base_A.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:42:47 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/06 15:50:46 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base_A.hpp"

Base_A::Base_A()
{
	return;
}

Base_A::Base_A(const Base_A & base)
{
	*this = base;
	return;
}

Base_A Base_A::operator=(const Base_A & base_a)
{
	if (this == &base_a)
		return *this;
	return *this;
}

Base_A::~Base_A()
{
	return;
}

void Base_A::info(void) const
{
	std::cout << "Im base A" << std::endl;
}