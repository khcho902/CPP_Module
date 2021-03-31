/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:12:50 by kycho             #+#    #+#             */
/*   Updated: 2021/03/31 14:04:49 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>
#include <string>

class FragTrap
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

	FragTrap(void);
	FragTrap(const FragTrap& frag_trap);
	FragTrap(const std::string& name);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& frag_trap);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	void		vaulthunter_dot_exe(std::string const & target);
};

#endif