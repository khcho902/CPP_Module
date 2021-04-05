/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 18:44:30 by kycho             #+#    #+#             */
/*   Updated: 2021/04/04 19:59:36 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_WEAPON_HPP
# define A_WEAPON_HPP

# include <string>

class AWeapon
{
	AWeapon(void);

protected:
	std::string	name;
	int apcost;
	int damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon& other);
	virtual ~AWeapon();

	AWeapon& operator=(const AWeapon& other);

	std::string const getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;
	virtual void attack(void) const = 0;
};

#endif
