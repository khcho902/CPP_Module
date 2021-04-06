/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:34:00 by kycho             #+#    #+#             */
/*   Updated: 2021/04/06 15:05:28 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& other)
{
	(void)other;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout <<  "I'll be back..." << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator& other)
{
	(void)other;
	return *this;
}

ISpaceMarine* AssaultTerminator::clone(void) const
{
	AssaultTerminator* copy = new AssaultTerminator(*this);
	return copy;
}

void AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const
{
	std::cout <<  "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const
{
	std::cout <<  "* attacks with chainfists *" << std::endl;
}
