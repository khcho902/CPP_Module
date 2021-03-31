/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:28:34 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 02:05:20 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	ClapTrap ct("ct");
	FragTrap ft("ft");
	ScavTrap st("st");
	NinjaTrap nt("nt");
	
	nt.showStatus();

	nt.meleeAttack("target");
	nt.rangedAttack("target");

	nt.takeDamage(120);
	nt.showStatus();

	nt.beRepaired(50);
	nt.showStatus();
	
	std::cout << "\n###############################################\n" << std::endl;

	nt.ninjaShoebox(ct);
	std::cout << std::endl;
	nt.ninjaShoebox(ft);
	std::cout << std::endl;
	nt.ninjaShoebox(st);
	std::cout << std::endl;
	nt.ninjaShoebox(nt);

	std::cout << "\n###############################################\n" << std::endl;
	
	return 0;
}
