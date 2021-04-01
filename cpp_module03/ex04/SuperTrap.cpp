/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:57:24 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 16:10:26 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
: ClapTrap(100, 100, 120, 120, 1, "default_name", 60, 20, 5, "SuperTrap"), FragTrap(), NinjaTrap()
{
	srand(time(NULL));
	
	std::cout << "** In SuperTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by default constructor)" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& super_trap)
: ClapTrap(super_trap.hit_points, super_trap.max_hit_points, super_trap.energy_points,
			super_trap.max_hit_points, super_trap.level, super_trap.name, super_trap.melee_attack_damage,
			super_trap.ranged_attack_damage, super_trap.armor_damage_reduction, super_trap.type),
	FragTrap(), NinjaTrap()
{
	srand(time(NULL));

	std::cout << "** In SuperTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by copy constructor)" << std::endl;
}

SuperTrap::SuperTrap(const std::string& _name)
: ClapTrap(100, 100, 120, 120, 1, _name, 60, 20, 5, "SuperTrap"), FragTrap(), NinjaTrap()
{
	srand(time(NULL));

	std::cout << "** In SuperTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by name constructor)" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "** In SuperTrap destructor ** // ";	
	std::cout << type << "<" << name << "> is destroyed!!" << std::endl;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap& super_trap)
{
	std::cout << "Assignation procedure is executed" << std::endl;
	
	hit_points = super_trap.hit_points;
	max_hit_points = super_trap.max_hit_points;
	energy_points = super_trap.energy_points;
	max_energy_points = super_trap.max_energy_points;
	level = super_trap.level;
	name = super_trap.name;
	melee_attack_damage = super_trap.melee_attack_damage;
	ranged_attack_damage = super_trap.ranged_attack_damage;
	armor_damage_reduction = super_trap.armor_damage_reduction;
	return *this;
}

void		SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void		SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
