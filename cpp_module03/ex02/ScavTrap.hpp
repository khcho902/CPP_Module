/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:26:19 by kycho             #+#    #+#             */
/*   Updated: 2021/03/31 16:29:32 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
	unsigned int	hit_points;
	unsigned int	max_hit_points;
	unsigned int	energy_points;
	unsigned int	max_energy_points;
	unsigned int	level;
	std::string		name;
	unsigned int	melee_attack_damage;
	unsigned int	ranged_attack_damage;
	unsigned int	armor_damage_reduction;

public:

	ScavTrap(void);
	ScavTrap(const ScavTrap& scav_trap);
	ScavTrap(const std::string& name);
	~ScavTrap();

	ScavTrap&	operator=(const ScavTrap& scav_trap);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	void		challengeNewcomer(std::string const & target);
};

#endif