/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:25:12 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 13:23:52 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


void HumanA::attack(void)
{
    std::cout << _name << " attacks with their : " << _weaponREF.getType() << std::endl;    
}