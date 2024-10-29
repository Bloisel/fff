/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:19:24 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 09:09:56 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    // Zombie test = Zombie("Je mapelle Zombie");
    // test.announce();
    // Zombie Foo("Foo");
    // Foo.announce();
    randomChump("Booba");
    Zombie *zero = newZombie("Elie Yafa");
    zero->announce();
    // zero = newZombie("Elie Yafa n'est pas booba");
    // zero->announce();
    //zero->test();
    delete zero;
    return (0); 
}