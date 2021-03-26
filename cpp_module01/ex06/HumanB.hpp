/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 22:40:01 by kycho             #+#    #+#             */
/*   Updated: 2021/03/26 22:51:47 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H_HPP
# define HUMAN_H_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	std::string name;
	Weapon *weapon;

public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack(void) const;
};

#endif