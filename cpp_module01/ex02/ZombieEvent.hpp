/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 01:25:48 by kycho             #+#    #+#             */
/*   Updated: 2021/03/26 02:37:00 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
	std::string type;

public:
	ZombieEvent(void);
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	void randomChump(void);
};

#endif
