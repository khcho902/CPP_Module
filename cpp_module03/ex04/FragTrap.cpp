/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:48:24 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 16:35:15 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
: ClapTrap(100, 100, 100, 100, 1, "default_name", 30, 20, 5, "FragTrap")
{
	srand(time(NULL));
	
	std::cout << "** In FragTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by default constructor)" << std::endl;
}

FragTrap::FragTrap(const FragTrap& frag_trap)
: ClapTrap(frag_trap.hit_points, frag_trap.max_hit_points, frag_trap.energy_points,
			frag_trap.max_hit_points, frag_trap.level, frag_trap.name, frag_trap.melee_attack_damage,
			frag_trap.ranged_attack_damage, frag_trap.armor_damage_reduction, frag_trap.type)
{
	srand(time(NULL));

	std::cout << "** In FragTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by copy constructor)" << std::endl;
}

FragTrap::FragTrap(const std::string& _name)
: ClapTrap(100, 100, 100, 100, 1, _name, 30, 20, 5, "FragTrap")
{
	srand(time(NULL));

	std::cout << "** In FragTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by name constructor)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "** In FragTrap destructor ** // ";	
	std::cout << type << "<" << name << "> is destroyed!!" << std::endl;
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
}

void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FragTrap's rangedAttack function!!!!" << std::endl;
	ClapTrap::rangedAttack(target);
}

void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FragTrap's meleeAttack function!!!!" << std::endl;
	ClapTrap::meleeAttack(target);
}
