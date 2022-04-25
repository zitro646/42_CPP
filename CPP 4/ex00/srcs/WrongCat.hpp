/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:32:19 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/25 13:33:57 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
#define WRONG_CAT_H

#include"Dog.hpp"

class WrongCat : public Dog
{
public:
	WrongCat();
	~WrongCat();
	WrongCat& operator=(WrongCat const & clap);
};


#endif