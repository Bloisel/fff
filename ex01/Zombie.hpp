/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:19:33 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 09:44:28 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H


#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>

class Zombie
{
    public :
    Zombie(std::string name);
    Zombie(void){};
	~Zombie(void); 
    void announce( void );
    void set(std::string name);

    private :
    std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif