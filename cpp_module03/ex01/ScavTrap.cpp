/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:26:16 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 16:51:59 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	srand(time(NULL));
	
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	name = "default_name";
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;
	
	std::cout << "ScavTrap<" << name << "> is ready for fight!! (by default constructor)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scav_trap)
{
	srand(time(NULL));
	
	*this = scav_trap;

	std::cout << "ScavTrap<" << name << "> is ready for fight!! (by copy constructor)" << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name)
{
	srand(time(NULL));
	
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	name = _name;
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;

	std::cout << "ScavTrap<" << name << "> is ready for fight!! (by name constructor)" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap<" << name << "> is destroyed!!" << std::endl;
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

void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap<" << name << "> attacks <" << target << "> at range, causing <" << ranged_attack_damage << "> points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap<" << name << "> attacks <" << target << "> at melee, causing <" << melee_attack_damage << "> points of damage!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	if (armor_damage_reduction >= amount)
		amount = 0;
	else
		amount -= armor_damage_reduction;	
	
	std::cout << "ScavTrap<" << name << "> takes " << amount << " points of damage!!" << std::endl;

	if (hit_points <= amount)
		hit_points = 0;
	else
		hit_points -= amount;
	
	std::cout << "ScavTrap<" << name << ">'s hit_point is " << hit_points << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap<" << name << "> is repaired by " << amount << " points of hit_point, energy_point!!" << std::endl;
	
	hit_points = std::min(hit_points + amount, max_hit_points);
	energy_points = std::min(energy_points + amount, max_energy_points);

	
	std::cout << "ScavTrap<" << name << ">'s hit_point is " << hit_points << ", energy_point is " << energy_points << std::endl;
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

	std::cout << "ScavTrap<" << name << ">'s energy_points is " << energy_points << std::endl;
}
