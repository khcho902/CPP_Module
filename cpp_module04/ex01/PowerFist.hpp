/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:28:05 by kycho             #+#    #+#             */
/*   Updated: 2021/04/04 20:00:01 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_HPP
# define POWER_FIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist(void);
	PowerFist(const PowerFist& other);
	~PowerFist();

	PowerFist& operator=(const PowerFist& other);

	void attack(void) const;
};

#endif
