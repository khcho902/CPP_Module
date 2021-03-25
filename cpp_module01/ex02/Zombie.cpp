/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 01:24:00 by kycho             #+#    #+#             */
/*   Updated: 2021/03/26 02:18:13 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : type(type), name(name) {};

void Zombie::announce(void)
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}
