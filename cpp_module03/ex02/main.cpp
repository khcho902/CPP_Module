/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:28:34 by kycho             #+#    #+#             */
/*   Updated: 2021/03/31 16:45:38 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{

	FragTrap ft("ft");
	ScavTrap sc("sc");

	ft.rangedAttack("robot1");
	ft.meleeAttack("robot2");

	sc.rangedAttack("robot3");
	sc.meleeAttack("robot4");

	std::cout << std::endl;

	ft.vaulthunter_dot_exe("robot3");
	
	sc.challengeNewcomer("roboot4");
	sc.challengeNewcomer("roboot4");
	sc.challengeNewcomer("roboot4");
	sc.challengeNewcomer("roboot4");

	std::cout << std::endl;

	ft.takeDamage(55);
	ft.takeDamage(65);

	sc.takeDamage(55);
	sc.takeDamage(65);

	std::cout << std::endl;

	ft.beRepaired(30);
	ft.beRepaired(90);
	
	sc.beRepaired(30);
	sc.beRepaired(90);

	std::cout << std::endl;

	return 0;
}
