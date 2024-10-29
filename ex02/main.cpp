/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:12:14 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/29 10:20:44 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>

int main()
{
    std::string name = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &name;

    std::string& stringREF = name;

     std::cout << "---------------------------------------------------------------" << std::endl;
    
    std::cout << "The memory address of the string variable " << &name << std::endl;
    
    std::cout << "The memory address held by stringPTR " << stringPTR << std::endl;

    std::cout << "The memory address held by stringREF " << &stringREF << std::endl;
      
    std::cout << "---------------------------------------------------------------" << std::endl;
    
    std::cout << "The value of the string " << name << std::endl;

    std::cout << "The value pointed to by stringPTR " << *stringPTR << std::endl;

    std::cout << "The value pointed to by stringREF " << stringREF << std::endl;

    return (0);
}