/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:29:06 by kycho             #+#    #+#             */
/*   Updated: 2021/03/30 17:35:45 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	int raw_bits;
	const static int num_of_fractional_bits = 8;

public:
	Fixed(void);
	Fixed(const Fixed& fixed);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	Fixed& operator=(const Fixed& fixed);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
