/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:00:21 by bloisel           #+#    #+#             */
/*   Updated: 2024/11/06 16:23:40 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>


class Harl
{
    public : 
        Harl(void); 
	    ~Harl(void);
        void complain( std::string level ); 
      
    private :
        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );
        static void (Harl::*f[4])();
};



#endif 