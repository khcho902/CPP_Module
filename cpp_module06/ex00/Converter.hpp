/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:12:13 by kycho             #+#    #+#             */
/*   Updated: 2021/04/09 15:38:48 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>
# include <iostream>
# include <cmath>

class Converter
{
	double value;
	bool impossible;

public:
	Converter(void);
	Converter(std::string input);
	Converter(const Converter& other);
	~Converter();

	Converter& operator=(const Converter& other);

	void toChar(void) const;
	void toInt(void) const;
	void toFloat(void) const;
	void toDouble(void) const;
};

#endif
