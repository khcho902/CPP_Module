/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:28:34 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 16:59:34 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{

	ScavTrap st("st");

	st.rangedAttack("robot1");
	st.meleeAttack("robot2");

	std::cout << std::endl;

	st.challengeNewcomer("robot3");
	st.challengeNewcomer("robot3");
	st.challengeNewcomer("robot3");
	st.challengeNewcomer("robot3");
	st.challengeNewcomer("robot3");

	std::cout << std::endl;

	st.takeDamage(55);
	st.takeDamage(65);

	std::cout << std::endl;

	st.beRepaired(30);
	st.beRepaired(90);

	std::cout << std::endl;

	return 0;
}
