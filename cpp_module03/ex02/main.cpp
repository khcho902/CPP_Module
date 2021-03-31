/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:28:34 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 01:09:23 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	{
		ClapTrap ct("ct");
		ct.showStatus();

		ct.meleeAttack("target");
		ct.rangedAttack("target");

		ct.takeDamage(120);
		ct.showStatus();

		ct.beRepaired(50);
		ct.showStatus();
	}
	
	std::cout << "\n###############################################\n" << std::endl;

	{
		FragTrap ft("ft");
		ft.showStatus();

		ft.meleeAttack("target");
		ft.rangedAttack("target");

		ft.vaulthunter_dot_exe("target");
		ft.vaulthunter_dot_exe("target");
		ft.vaulthunter_dot_exe("target");
		ft.showStatus();

		ft.takeDamage(110);
		ft.showStatus();

		ft.beRepaired(60);
		ft.showStatus();
	}

	std::cout << "\n###############################################\n" << std::endl;

	{
		ScavTrap st("st");
		st.showStatus();

		st.meleeAttack("target");
		st.rangedAttack("target");

		st.challengeNewcomer("target");
		st.challengeNewcomer("target");
		st.challengeNewcomer("target");
		st.showStatus();

		st.takeDamage(110);
		st.showStatus();

		st.beRepaired(60);
		st.showStatus();
	}
	
	return 0;
}
