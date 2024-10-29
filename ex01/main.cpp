/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:19:24 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 09:47:28 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    Zombie *hordee = zombieHorde(5 , "Mafiaaa Zombie");
    for (int i = 0; i < 5; i++)
    {
        hordee[i].announce();
    }
    delete[] hordee;
    return (0);
}