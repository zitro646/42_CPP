/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:52:11 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/05/02 09:44:09 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>
class Karen
{
private:
    typedef void (Karen::*funptr) (void);
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:
    Karen(void);
    ~Karen(void);
    void complain (std::string complain);
};




#endif