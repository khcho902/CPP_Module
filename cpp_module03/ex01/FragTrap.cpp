/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:48:24 by kycho             #+#    #+#             */
/*   Updated: 2021/03/31 16:21:54 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	srand(time(NULL));
	
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	name = "default_name";
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
	
	std::cout << "FragTrap<" << name << "> is ready for fight!! (by default constructor)" << std::endl;
}

FragTrap::FragTrap(const FragTrap& frag_trap)
{
	srand(time(NULL));
	
	*this = frag_trap;

	std::cout << "FragTrap<" << name << "> is ready for fight!! (by copy constructor)" << std::endl;
}

FragTrap::FragTrap(const std::string& _name)
{
	srand(time(NULL));
	
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	name = _name;
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;

	std::cout << "FragTrap<" << name << "> is ready for fight!! (by name constructor)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap<" << name << "> is destroyed!!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& frag_trap)
{
	std::cout << "Assignation procedure is executed" << std::endl;
	
	hit_points = frag_trap.hit_points;
	max_hit_points = frag_trap.max_hit_points;
	energy_points = frag_trap.energy_points;
	max_energy_points = frag_trap.max_energy_points;
	level = frag_trap.level;
	name = frag_trap.name;
	melee_attack_damage = frag_trap.melee_attack_damage;
	ranged_attack_damage = frag_trap.ranged_attack_damage;
	armor_damage_reduction = frag_trap.armor_damage_reduction;
	return *this;
}

void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FragTrap<" << name << "> attacks <" << target << "> at range, causing <" << ranged_attack_damage << "> points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FragTrap<" << name << "> attacks <" << target << "> at melee, causing <" << melee_attack_damage << "> points of damage!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	if (armor_damage_reduction >= amount)
		amount = 0;
	else
		amount -= armor_damage_reduction;	
	
	std::cout << "FragTrap<" << name << "> takes " << amount << " points of damage!!" << std::endl;

	if (hit_points <= amount)
		hit_points = 0;
	else
		hit_points -= amount;
	
	std::cout << "FragTrap<" << name << ">'s hit_point is " << hit_points << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap<" << name << "> is repaired by " << amount << " points of hit_point, energy_point!!" << std::endl;
	
	hit_points = std::min(hit_points + amount, max_hit_points);
	energy_points = std::min(energy_points + amount, max_energy_points);

	
	std::cout << "FragTrap<" << name << ">'s hit_point is " << hit_points << ", energy_point is " << energy_points << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string		attacks[5] = {"Lucky Punch", "Iron pipe", "Shotgun", "Special Cannon", "Fireball"};
	int				damages[5] = {30, 35, 40, 45, 50};

	if (energy_points < 25)
	{
		std::cout << "FragTrap<" << name << ">'s energe_point is insufficient!!" << std::endl;
	}
	else
	{
		energy_points -= 25;
		int attack_num = rand() % 5;
		std::cout << "FragTrap<" << name << "> attacks <" << target << "> at "<< attacks[attack_num] <<", causing <" << damages[attack_num] << "> points of damage!" << std::endl;
	}

	std::cout << "FragTrap<" << name << ">'s energy_points is " << energy_points << std::endl;
}
