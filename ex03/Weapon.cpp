/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:36:23 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 12:46:42 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(void)
{
   return ; 
}

Weapon::Weapon(std::string const & name) : _type(name) 
{
     return ;
}


Weapon::~Weapon(void)
{
    return ;
}

// void Weapon::announce(void)
// {
//     std::cout << this->_type << std::endl;
//     return ; 
// }

const std::string& Weapon::getType() const 
{
    const std::string& typeREF = this->_type;
    return typeREF;
    //return this->_type; 
}

void Weapon::setType(const std::string& newtypeREF)
{
    this->_type = newtypeREF; 
}