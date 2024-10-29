/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:19:33 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 08:56:42 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H


#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>



class Zombie
{
    public :
    Zombie(std::string name);
    //Zombie(std::string name);
	~Zombie(void); 
    void announce( void );
    void test( void );

    private :
    
    std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif