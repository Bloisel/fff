/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:00:21 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/30 11:04:58 by bloisel          ###   ########.fr       */
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
        void complain( std::string level );
        Harl(void); 
	    ~Harl(void); 

    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

};



#endif 