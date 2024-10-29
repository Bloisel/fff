/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:22:32 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 12:47:01 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H


#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Weapon
{
    public :
    Weapon(std::string const& name);
    Weapon(void); 
	~Weapon(void); 
    void announce(void); 
    void setType(const std::string&);
    const std::string & getType() const;
    
    private : 
    std::string _type;
    std::string _name;
    
};


#endif