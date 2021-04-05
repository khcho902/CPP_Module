/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:26:25 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 18:30:16 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure& otehr) : AMateria(otehr) {}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& other)
{
	type = other.type;
	_xp = other._xp;
	
	return *this;
}

AMateria* Cure::clone(void) const
{
	AMateria* cure = new Cure;
	return cure;
}

void Cure::use(ICharacter& target)
{
	std::cout <<   "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}
