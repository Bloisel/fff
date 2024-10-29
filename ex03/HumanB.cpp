/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:25:14 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 14:53:00 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


void HumanB::attack(void)
{
    if (_weaponPTR)
        std::cout << _name << " attacks with their : " << _weaponPTR->getType() << std::endl;
    else
        std::cout << _name << " has no weapon to attack " << std::endl;
    
} 


