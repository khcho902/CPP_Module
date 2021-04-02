/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:39:24 by kycho             #+#    #+#             */
/*   Updated: 2021/04/02 16:05:27 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) : Victim()
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& peon) : Victim(peon)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator=(const Peon& peon)
{
    name = peon.name;
    return *this;
}

void Peon::getPolymorphed(void) const
{
    std::cout << name << " has been turned into a pink pony!" << std::endl;
}