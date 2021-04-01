/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 20:35:05 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 01:53:31 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	unsigned int	hit_points;
	unsigned int	max_hit_points;
	unsigned int	energy_points;
	unsigned int	max_energy_points;
	unsigned int	level;
	std::string		name;
	unsigned int	melee_attack_damage;
	unsigned int	ranged_attack_damage;
	unsigned int	armor_damage_reduction;
	std::string		type;

public:
	ClapTrap(void);
	ClapTrap(const ClapTrap& clap_trap);
	ClapTrap(const std::string& name);
	ClapTrap(const unsigned int hit_points,
			const unsigned int max_hit_points,
			const unsigned int energy_points,
			const unsigned int max_energy_points,
			const unsigned int level,
			const std::string name,
			const unsigned int melee_attack_damage,
			const unsigned int ranged_attack_damage,
			const unsigned int armor_damage_reduction,
			const std::string type);
	~ClapTrap();

	ClapTrap&	operator=(const ClapTrap& clap_trap);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	void		showStatus(void) const;
	std::string getName(void) const;
	std::string getType(void) const;
};

#endif
