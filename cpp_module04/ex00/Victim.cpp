/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:47:59 by kycho             #+#    #+#             */
/*   Updated: 2021/04/02 16:21:25 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : name("empty")
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name) : name(name)
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& victim)
{
    *this = victim;
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}
Victim::~Victim()
{
    std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

Victim& Victim::operator=(const Victim& victim)
{
    name = victim.name;
    return *this;
}

std::string Victim::getName(void) const
{
    return name;
}

void Victim::getPolymorphed(void) const
{
    std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Victim& victim)
{
    os << "I'm " << victim.getName() << " and I like otters!" << std::endl;
    return os;
}
