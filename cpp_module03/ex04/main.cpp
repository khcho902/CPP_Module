/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:28:34 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 16:24:07 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main(void)
{
	SuperTrap super_trap("super_trap");
	ClapTrap ct("ct");
	FragTrap ft("ft");
	ScavTrap st("st");
	NinjaTrap nt("nt");
	
	super_trap.showStatus();

	super_trap.meleeAttack("target");
	super_trap.rangedAttack("target");

	super_trap.takeDamage(120);
	super_trap.showStatus();

	super_trap.beRepaired(50);
	super_trap.showStatus();

	std::cout << "\n###############################################\n" << std::endl;

	super_trap.vaulthunter_dot_exe("target");
	super_trap.vaulthunter_dot_exe("target");
	super_trap.vaulthunter_dot_exe("target");
	super_trap.vaulthunter_dot_exe("target");
	super_trap.vaulthunter_dot_exe("target");
	
	std::cout << "\n###############################################\n" << std::endl;

	super_trap.ninjaShoebox(ct);
	std::cout << std::endl;
	super_trap.ninjaShoebox(ft);
	std::cout << std::endl;
	super_trap.ninjaShoebox(st);
	std::cout << std::endl;
	super_trap.ninjaShoebox(nt);

	std::cout << "\n###############################################\n" << std::endl;
	
	return 0;
}
