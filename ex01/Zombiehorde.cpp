/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombiehorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:18:16 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 09:47:05 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 0)
    {
        std::cout << "math isnt mathing" << std::endl;
        exit(EXIT_FAILURE);
    }
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].set(name);
    return horde; 
}