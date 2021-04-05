/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:39:00 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 17:39:02 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("default"), _xp(0) {}

AMateria::AMateria(std::string const & type) : type(type), _xp(0) {}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& other)
{
	type = other.type;
	_xp = other._xp;
	return *this;
}

std::string const & AMateria::getType(void) const
{
	return type;
}

unsigned int AMateria::getXP(void) const
{
	return _xp;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}