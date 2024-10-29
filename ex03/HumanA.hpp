/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:24:37 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 13:25:17 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H


#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA 
{
    public :
    HumanA(std::string name, Weapon& test) : _name(name) , _weaponREF(test) {}
	~HumanA() {}
    void attack(void); 
       
    private :
    std::string _name;
    Weapon& _weaponREF;

    
};


#endif