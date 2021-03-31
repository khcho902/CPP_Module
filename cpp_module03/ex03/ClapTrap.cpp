/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 20:35:13 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 01:05:21 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	srand(time(NULL));
	
	hit_points = 10;
	max_hit_points = 10;
	energy_points = 10;
	max_energy_points = 10;
	level = 1;
	name = "default_name";
	melee_attack_damage = 3;
	ranged_attack_damage = 2;
	armor_damage_reduction = 0;
	type = "ClapTrap";
	
	std::cout << "** In ClapTrap constructor ** // ";
	std::cout << type <<"<" << name << "> is ready for fight!! (by default constructor)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clap_trap)
{
	srand(time(NULL));
	
	*this = clap_trap;

	std::cout << "** In ClapTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by copy constructor)" << std::endl;
}

ClapTrap::ClapTrap(const std::string& _name)
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
	type = "ClapTrap";

	std::cout << "** In ClapTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by name constructor)" << std::endl;
}

ClapTrap::ClapTrap(const unsigned int _hit_points, const unsigned int _max_hit_points,
					const unsigned int _energy_points, const unsigned int _max_energy_points,
					const unsigned int _level, const std::string _name,
					const unsigned int _melee_attack_damage, const unsigned int _ranged_attack_damage,
					const unsigned int _armor_damage_reduction, const std::string _type)
{
	hit_points = _hit_points;
	max_hit_points = _max_hit_points;
	energy_points = _energy_points;
	max_energy_points = _max_energy_points;
	level = _level;
	name = _name;
	melee_attack_damage = _melee_attack_damage;
	ranged_attack_damage = _ranged_attack_damage;
	armor_damage_reduction = _armor_damage_reduction;
	type = _type;

	std::cout << "** In ClapTrap constructor ** // ";
	std::cout << type << "<" << name << "> is ready for fight!! (by all member constructor)" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "** In ClapTrap destructor ** // ";
	std::cout << type << "<" << name << "> is destroyed!!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& clap_trap)
{
	std::cout << "Assignation procedure is executed" << std::endl;
	
	hit_points = clap_trap.hit_points;
	max_hit_points = clap_trap.max_hit_points;
	energy_points = clap_trap.energy_points;
	max_energy_points = clap_trap.max_energy_points;
	level = clap_trap.level;
	name = clap_trap.name;
	melee_attack_damage = clap_trap.melee_attack_damage;
	ranged_attack_damage = clap_trap.ranged_attack_damage;
	armor_damage_reduction = clap_trap.armor_damage_reduction;
	type = clap_trap.type;
	return *this;
}

void		ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << type << "<" << name << "> attacks <" << target << "> at range, causing <" << ranged_attack_damage << "> points of damage!" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << type << "<" << name << "> attacks <" << target << "> at melee, causing <" << melee_attack_damage << "> points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (armor_damage_reduction >= amount)
		amount = 0;
	else
		amount -= armor_damage_reduction;	
	
	std::cout << type << "<" << name << "> takes " << amount << " points of damage!!" << std::endl;

	if (hit_points <= amount)
		hit_points = 0;
	else
		hit_points -= amount;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << type << "<" << name << "> is repaired by " << amount << " points of hit_point, energy_point!!" << std::endl;
	
	hit_points = std::min(hit_points + amount, max_hit_points);
	energy_points = std::min(energy_points + amount, max_energy_points);
}

void		ClapTrap::showStatus(void) const
{
	std::cout << "=== " << type << "<" << name << "> ===" << std::endl;
	std::cout << " hit_points    : " << hit_points << std::endl;
	std::cout << " energy_points : " << energy_points << std::endl;
	std::cout << "--------------------" << std::endl;
}
