/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 02:48:50 by kycho             #+#    #+#             */
/*   Updated: 2021/04/06 14:26:50 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	std::string name;
	int ap;
	AWeapon* aweapon;

	Character(void);

public:
	Character(std::string const & name);
	Character(const Character& other);
	~Character();

	Character& operator=(const Character& other);
	
	void recoverAP(void);
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const getName(void) const;

	int getAP(void) const;
	AWeapon* getAWeapon(void) const;

};

std::ostream& operator<<(std::ostream& os, const Character& character);

#endif
