/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:22:09 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 09:45:50 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



Zombie::Zombie(std::string name)
{
    this->_name = name;
    return ;
}

Zombie::~Zombie (void)
{
    std::cout << this->_name << " : This zombie has been destroyed" << std::endl;
    return ;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set(std::string name)
{
    this->_name = name;   
}