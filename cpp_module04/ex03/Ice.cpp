/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:59:10 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 18:30:26 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice& otehr) : AMateria(otehr) {}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice& other)
{
	type = other.type;
	_xp = other._xp;

	return *this;
}

AMateria* Ice::clone(void) const
{
	AMateria* ice = new Ice;
	return ice;
}

void Ice::use(ICharacter& target)
{
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
