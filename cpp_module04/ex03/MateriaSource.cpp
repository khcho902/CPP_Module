/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:54:29 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 18:07:06 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i] != NULL)
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}

	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i] != NULL)
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = materia;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL && inventory[i]->getType() == type)
			return inventory[i]->clone();
	}
	return 0;
}