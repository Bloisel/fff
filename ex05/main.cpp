/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:00:27 by bloisel           #+#    #+#             */
/*   Updated: 2024/11/06 16:38:29 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main()
{
		Harl test;

		test.complain("error");
		test.complain("debug");
		test.complain("warning");
		test.complain("info");
		test.complain("no complain");
		return (0);

}