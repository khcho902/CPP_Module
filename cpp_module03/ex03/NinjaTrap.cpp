/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:40:27 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 02:04:54 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
: ClapTrap(60, 60, 120, 120, 1, "default_name", 60, 5, 0, "NinjaTrap")
{
	srand(time(NULL));
	
	std::cout << "** In NinjaTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by default constructor)" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& ninja_trap)
: ClapTrap(ninja_trap.hit_points, ninja_trap.max_hit_points, ninja_trap.energy_points,
			ninja_trap.max_hit_points, ninja_trap.level, ninja_trap.name, ninja_trap.melee_attack_damage,
			ninja_trap.ranged_attack_damage, ninja_trap.armor_damage_reduction, ninja_trap.type)
{
	srand(time(NULL));

	std::cout << "** In NinjaTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by copy constructor)" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string& _name)
: ClapTrap(60, 60, 120, 120, 1, _name, 60, 5, 0, "NinjaTrap")
{
	srand(time(NULL));

	std::cout << "** In NinjaTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by name constructor)" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "** In NinjaTrap destructor ** // ";	
	std::cout << type << "<" << name << "> is destroyed!!" << std::endl;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& ninja_trap)
{
	std::cout << "Assignation procedure is executed" << std::endl;
	
	hit_points = ninja_trap.hit_points;
	max_hit_points = ninja_trap.max_hit_points;
	energy_points = ninja_trap.energy_points;
	max_energy_points = ninja_trap.max_energy_points;
	level = ninja_trap.level;
	name = ninja_trap.name;
	melee_attack_damage = ninja_trap.melee_attack_damage;
	ranged_attack_damage = ninja_trap.ranged_attack_damage;
	armor_damage_reduction = ninja_trap.armor_damage_reduction;
	return *this;
}

void		NinjaTrap::ninjaShoebox(const ClapTrap& target) const
{
	std::cout << " * ninjaShoebox [NinjaTrap -> ClapTrap] * " << std::endl;
	std::cout << "Hahahaha!!  " << type << "<" << name << "> attacks " << target.getType() << "<" << target.getName() << ">" << std::endl;
}

void		NinjaTrap::ninjaShoebox(const FragTrap& target) const
{
	std::cout << " * ninjaShoebox [NinjaTrap -> FragTrap] * " << std::endl;
	std::cout << "Hahahaha!!  " << type << "<" << name << "> attacks " << target.getType() << "<" << target.getName() << ">" << std::endl;
}

void		NinjaTrap::ninjaShoebox(const ScavTrap& target) const
{
	std::cout << " * ninjaShoebox [NinjaTrap -> ScavTrap] * " << std::endl;
	std::cout << "Hahahaha!!  " << type << "<" << name << "> attacks " << target.getType() << "<" << target.getName() << ">" << std::endl;	
}

void		NinjaTrap::ninjaShoebox(const NinjaTrap& target) const
{
	std::cout << " * ninjaShoebox [NinjaTrap -> NinjaTrap] * " << std::endl;
	std::cout << "Hahahaha!!  " << type << "<" << name << "> attacks " << target.getType() << "<" << target.getName() << ">" << std::endl;
}