/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:29:06 by kycho             #+#    #+#             */
/*   Updated: 2021/03/29 16:00:52 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	int raw_bits;
	const static int num_of_fractional_bits = 8;

public:
	Fixed(void);
	Fixed(const Fixed& fixed);
	~Fixed();

	Fixed& operator=(const Fixed& fixed);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
