/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:47:01 by kycho             #+#    #+#             */
/*   Updated: 2021/03/26 15:12:24 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde *ptr = new ZombieHorde(10);
	ptr->announce();
	delete ptr;

	std::cout << "\n-------------------------" << std::endl;

	ptr = new ZombieHorde(5);
	ptr->announce();
	delete ptr;

	std::cout << "\n-------------------------" << std::endl;

	ptr = new ZombieHorde(2);
	ptr->announce();
	delete ptr;

	return (0);
}
