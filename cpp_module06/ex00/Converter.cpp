/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:12:15 by kycho             #+#    #+#             */
/*   Updated: 2021/04/10 00:54:18 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(void) : value(0), impossible(false) {}

Converter::Converter(std::string input)
{
	size_t idx;

	try
	{
		if (input.length() == 1 && !std::isdigit(input.at(0)))
		{
			value = static_cast<double>(input.at(0));
			idx = 1;
		}
		else
		{
			value = std::stod(input, &idx);
		}
		impossible = false;
	}
	catch (const std::exception &e)
	{
		impossible = true;
		return;
	}

	if (idx != input.length())
	{
		if (input.at(idx) == 'f' && idx + 1 == input.length())
		{
			return;
		}
		else
		{
			impossible = true;
		}
	}
}

Converter::Converter(const Converter &other) :
	value(other.value),
	impossible(other.impossible)
{}

Converter::~Converter() {}

Converter &Converter::operator=(const Converter &other)
{
	value = other.value;
	impossible = other.impossible;
	return *this;
}

void Converter::toChar(void) const
{
	std::cout << "char: ";
	
	if (std::isnan(value) || std::isinf(value) || impossible)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	
	if (std::isprint(static_cast<char>(value)))
	{
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	}
	else
	{
		std::cout << "Non displayable" << std::endl;
	}
}

void Converter::toInt(void) const
{
	std::cout << "int: ";
	
	if (std::isnan(value) || value > INT_MAX || value < INT_MIN || impossible)
	{
		std::cout << "impossible" << std::endl;
		return;
	}

	std::cout << static_cast<int>(value) << std::endl;
}

void Converter::toFloat(void) const
{
	std::cout << "float: ";
	
	if (impossible)
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	
	std::cout << static_cast<float>(value);
	if (value - static_cast<int>(value) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void Converter::toDouble(void) const
{
	std::cout << "double: ";
	
	if (impossible)
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	
	std::cout << value;
	if (value - static_cast<int>(value) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}
