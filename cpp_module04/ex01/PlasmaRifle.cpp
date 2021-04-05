/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:15:46 by kycho             #+#    #+#             */
/*   Updated: 2021/04/04 19:59:50 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) :
	AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other) : 
	AWeapon(other.name, other.apcost, other.damage)
{}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& other)
{
	AWeapon::operator=(other);
	return *this;
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}