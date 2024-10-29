/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:23:58 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 14:52:49 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class HumanB
{
    public : 
    
    HumanB(std::string name) : _name(name), _weaponPTR(NULL) {}
	~HumanB(void) {}
    void attack(void);

    void setWeapon(Weapon& weapon)
    {
        _weaponPTR = &weapon;
    }

    private :
    std::string _name;  
    Weapon* _weaponPTR;
    
};


#endif