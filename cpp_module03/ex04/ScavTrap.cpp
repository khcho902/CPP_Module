/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:26:16 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 01:07:48 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
: ClapTrap(100, 100, 100, 100, 1, "default_name", 30, 20, 5, "ScavTrap")
{
	srand(time(NULL));

	std::cout << "** In ScavTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by default constructor)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scav_trap)
: ClapTrap(scav_trap.hit_points, scav_trap.max_hit_points, scav_trap.energy_points,
			scav_trap.max_hit_points, scav_trap.level, scav_trap.name, scav_trap.melee_attack_damage,
			scav_trap.ranged_attack_damage, scav_trap.armor_damage_reduction, scav_trap.type)
{
	srand(time(NULL));
	
	std::cout << "** In ScavTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by copy constructor)" << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name)
: ClapTrap(100, 100, 100, 100, 1, _name, 30, 20, 5, "ScavTrap")
{
	srand(time(NULL));

	std::cout << "** In ScavTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by name constructor)" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "** In ScavTrap destructor ** // ";
	std::cout << type << "<" << name << "> is destroyed!!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scav_trap)
{
	std::cout << "Assignation procedure is executed" << std::endl;
	
	hit_points = scav_trap.hit_points;
	max_hit_points = scav_trap.max_hit_points;
	energy_points = scav_trap.energy_points;
	max_energy_points = scav_trap.max_energy_points;
	level = scav_trap.level;
	name = scav_trap.name;
	melee_attack_damage = scav_trap.melee_attack_damage;
	ranged_attack_damage = scav_trap.ranged_attack_damage;
	armor_damage_reduction = scav_trap.armor_damage_reduction;
	return *this;
}

void		ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string		challenges[5] = {"Wake up early", "Study hard more and more", "Running without a break!!", "Eat 3 hamburgers", "Finish up to CPP08"};

	if (energy_points < 25)
	{
		std::cout << "ScavTrap<" << name << ">'s energe_point is insufficient!!" << std::endl;
	}
	else
	{
		energy_points -= 25;
		int challenge_num = rand() % 5;
		std::cout << "ScavTrap<" << name << "> gives <" << target << "> a challenge["<< challenges[challenge_num] <<"]" << std::endl;
	}
}
