/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:06:40 by kycho             #+#    #+#             */
/*   Updated: 2021/03/26 15:09:32 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
	int size;
	Zombie** zombie_list;

public:
	ZombieHorde(int n);
	~ZombieHorde();

	void announce(void) const;
};

#endif
