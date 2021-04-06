/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 02:30:15 by kycho             #+#    #+#             */
/*   Updated: 2021/04/06 14:38:19 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) :
	hp(0),
	type("default")
{}

Enemy::Enemy(int hp, std::string const & type) :
	hp(hp),
	type(type)
{}

Enemy::Enemy(const Enemy& other)
{
	*this = other;
}

Enemy::~Enemy() {}

Enemy& Enemy::operator=(const Enemy& other)
{
	this->hp = other.hp;
	this->type = other.type;
	
	return *this;
}

std::string const Enemy::getType(void) const
{
	return type;
}

int Enemy::getHP(void) const
{
	return hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	hp = std::max(0, hp - damage);
}
