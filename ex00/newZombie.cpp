/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:22:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 09:15:02 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *newone = new Zombie(name);
    //newone->announce();
    return newone;
}

// inst ext de classe Zombie point vers instance de Cl Zombie permet de stcoker adresse de OBJET
// newZombie appl = nvl objet Zombie cree dynamiquement pointeur retourne sur cet objet Zmbie // new one ne contion pas lobjet Zombie lui meme mai
// ladresse sur lequel objet Zmbie est alloue sur le tas  