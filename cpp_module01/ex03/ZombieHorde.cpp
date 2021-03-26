/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:20:43 by kycho             #+#    #+#             */
/*   Updated: 2021/03/26 15:09:41 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	srand(time(NULL));

	size = n;
	std::string type_list[3] = {"week", "normal", "strong"};

	zombie_list = new Zombie*[size];

	for(int i = 0; i < size; i++)
	{
		std::string name;		
		int name_size = rand() % 5 + 5;
		for (int i = 0; i < name_size; i++)
			name += rand() % 26 + 'a';
		
		std::string type = type_list[rand() % 3];

		zombie_list[i] = new Zombie(type, name);
	}
}

ZombieHorde::~ZombieHorde()
{
	for (int i = 0; i < size; i++)
	{
		delete zombie_list[i];
	}
	delete[] zombie_list;
}

void ZombieHorde::announce(void) const
{
	for (int i = 0; i < size; i++)
	{
		zombie_list[i]->announce();
	}
}