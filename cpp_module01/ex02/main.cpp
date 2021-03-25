/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 02:19:05 by kycho             #+#    #+#             */
/*   Updated: 2021/03/26 02:35:30 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	Zombie zombie1("type1", "zombie1");
	zombie1.announce();

	Zombie *zombie2 = new Zombie("type2", "zombie2");
	zombie2->announce();
	delete zombie2;

	std::cout << std::endl;

	ZombieEvent event;
	event.setZombieType("eventType");
	
	Zombie* zombie3 = event.newZombie("zombie3");
	zombie3->announce();
	delete zombie3;

	std::cout << "\n-------- randome zombie --------" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		event.randomChump();
	}
	
	return (0);
}