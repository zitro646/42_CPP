/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:52:11 by root              #+#    #+#             */
/*   Updated: 2022/04/12 13:50:23 by root             ###   ########.fr       */
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