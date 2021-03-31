/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:28:34 by kycho             #+#    #+#             */
/*   Updated: 2021/03/31 15:37:58 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{

	FragTrap ft("ft");

	ft.rangedAttack("robot1");
	ft.meleeAttack("robot2");

	std::cout << std::endl;

	ft.vaulthunter_dot_exe("robot3");
	ft.vaulthunter_dot_exe("robot3");
	ft.vaulthunter_dot_exe("robot3");
	ft.vaulthunter_dot_exe("robot3");
	ft.vaulthunter_dot_exe("robot3");

	std::cout << std::endl;

	ft.takeDamage(55);
	ft.takeDamage(65);

	std::cout << std::endl;

	ft.beRepaired(30);
	ft.beRepaired(90);

	std::cout << std::endl;

	return 0;
}
