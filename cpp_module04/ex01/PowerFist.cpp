/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:29:05 by kycho             #+#    #+#             */
/*   Updated: 2021/04/04 19:59:55 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) :
	AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(const PowerFist& other) :
	AWeapon(other.name, other.apcost, other.damage)
{}

PowerFist::~PowerFist() {}

PowerFist& PowerFist::operator=(const PowerFist& other)
{
	AWeapon::operator=(other);
	return *this;
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}