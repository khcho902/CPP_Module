/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 01:32:20 by kycho             #+#    #+#             */
/*   Updated: 2021/03/26 12:49:24 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	srand(time(NULL));
}

void ZombieEvent::setZombieType(const std::string type)
{
	this->type = type;
}

Zombie* ZombieEvent::newZombie(const std::string name) const
{
	Zombie *new_zombie;

	new_zombie = new Zombie(type, name);
	return (new_zombie);
}

void ZombieEvent::randomChump(void) const
{
	std::string name;
	int name_size;

	name_size = rand() % 5 + 5;

	for (int i = 0; i < name_size; i++)
	{
		name += rand() % 26 + 'a';
	}

	Zombie random_zombie(type, name);
	random_zombie.announce();
}
