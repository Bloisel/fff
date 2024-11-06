/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:00:24 by bloisel           #+#    #+#             */
/*   Updated: 2024/11/06 16:37:25 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl (void)
{
   return ; 
}

Harl::~Harl(void)
{
    return ;
}

void Harl::_debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;    
}

void Harl::_info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning( void )
{
   std:: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

 void Harl::complain( std::string level )
 {
    int i = 0;
    
    std::string str[4] = {"debug" , "info" , "warning" , "error"};
    
    // void (Harl::*p[4])(void); 
    
    // p[4] = {&Harl::_debug , &Harl::_info , &Harl::_warning , &Harl::_error};
     
    void (Harl::*f[4])() = {&Harl::_debug , &Harl::_info , &Harl::_warning , &Harl::_error};
    
     while (i < 4)
     {
        if (str[i] == level)
        {
            (this->*f[i])();
            return ;
        }
        i++;
     }
     std::cout << "Mauvaise Entree " << std::endl;
    
 }