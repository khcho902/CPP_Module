/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:48:06 by kycho             #+#    #+#             */
/*   Updated: 2021/04/09 15:45:07 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
		return 1;

	Converter converter(static_cast<std::string>(argv[1]));

	converter.toChar();
	converter.toInt();
	converter.toFloat();
	converter.toDouble();
	
	return 0;
}
