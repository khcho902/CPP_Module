/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:41:23 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 11:33:05 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) :
	name("default"),
	ap(40),
	aweapon(NULL)
{}

Character::Character(std::string const & name) :
	name(name),
	ap(40),
	aweapon(NULL)
{}

Character::Character(const Character& other)
{
	*this = other;
}

Character::~Character() {}

Character& Character::operator=(const Character& other)
{
	name = other.name;
	ap = other.ap;
	aweapon = other.aweapon;
	return *this;
}

void Character::recoverAP(void)
{
	ap = std::min(ap + 10, 40);
}

void Character::equip(AWeapon* aweapon)
{
	this->aweapon = aweapon;
}

void Character::attack(Enemy* enemy)
{
	if (!aweapon || ap < aweapon->getAPCost())
	{
		return ;
	}

	ap -= aweapon->getAPCost();

	std::cout << name << " attacks " << enemy->getType() << " with a " << aweapon->getName() << std::endl;
	aweapon->attack();

	enemy->takeDamage(aweapon->getDamage());
	
	if (enemy->getHP() <= 0)
	{
		delete enemy;
	}
}

std::string const Character::getName() const
{
	return name;
}

int Character::getAP(void) const
{
	return ap;
}

AWeapon* Character::getAWeapon(void) const
{
	return aweapon;
}

std::ostream& operator<<(std::ostream& os, const Character& character)
{
	if (character.getAWeapon())
	{
		os << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getAWeapon()->getName() << std::endl;
	}
	else
	{
		os << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	}
	
	return os;
}
