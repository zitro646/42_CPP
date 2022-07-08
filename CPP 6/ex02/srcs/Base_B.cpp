/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base_B.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:42:52 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/06 15:56:01 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base_B.hpp"

Base_B::Base_B()
{
	return;
}

Base_B::Base_B(const Base_B & base)
{
	*this = base;
	return;
}

Base_B Base_B::operator=(const Base_B & base)
{
	if (this == &base)
		return *this;
	return *this;
}

Base_B::~Base_B()
{
	return;
}

void Base_B::info(void) const
{
	std::cout << "Im base B" << std::endl;
}