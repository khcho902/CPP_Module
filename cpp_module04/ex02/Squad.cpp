/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:03:42 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 13:41:04 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : count(0), units(NULL) {}

Squad::Squad(const Squad& other)
{
	count = other.count;
	units = new ISpaceMarine*[count];

	for (int i = 0; i < count; i++)
	{
		units[i] = other.getUnit(i)->clone();
	}
}

Squad::~Squad()
{
	for (int i = 0; i < count; i++)
	{
		delete units[i];
	}
	if (count > 0)
	{
		delete[] units;
	}
}

Squad& Squad::operator=(const Squad& other)
{
	for (int i = 0; i < count; i++)
	{
		delete units[i];
	}
	if (count > 0)
	{
		delete[] units;
	}

	count = other.count;
	units = new ISpaceMarine*[count];
	for (int i = 0; i < count; i++)
	{
		units[i] = other.getUnit(i)->clone();
	}
	return *this;
}

int Squad::getCount() const
{
	return count;
}

ISpaceMarine* Squad::getUnit(int idx) const
{
	if (0 <= idx && idx < count)
		return units[idx];
	else
		return NULL;
}

int Squad::push(ISpaceMarine* marine)
{
	if (marine == NULL)
		return count;

	for (int i = 0; i < count; i++)
	{
		if (marine == units[i])
			return count;
	}

	ISpaceMarine** new_units = new ISpaceMarine*[count + 1];

	for(int i = 0; i < count; i++)
	{
		new_units[i] = units[i];
	}
	new_units[count] = marine;

	if (count > 0)
		delete[] units;

	units = new_units;
	count++;
	
	return count;
}
