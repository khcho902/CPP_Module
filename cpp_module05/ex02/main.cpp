/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:18:18 by kycho             #+#    #+#             */
/*   Updated: 2021/04/08 10:34:20 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		ShrubberyCreationForm sc("target1");	// sign(145), exec(137)
		RobotomyRequestForm rr("target2");		// sign(72) , exec(45)
		PresidentialPardonForm pp("target3");   // sign(25) , exec(5)

		Bureaucrat bu("bu", 150);
		
		bu.executeForm(sc);
		bu.executeForm(rr);
		bu.executeForm(pp);

		bu.signForm(sc);
		bu.executeForm(sc);

		bu.signForm(rr);
		bu.executeForm(rr);

		bu.signForm(pp);
		bu.executeForm(pp);

		std::cout << std::endl;

		Bureaucrat superBu("superBu", 1);

		superBu.executeForm(sc);
		superBu.executeForm(rr);
		superBu.executeForm(pp);

		superBu.signForm(sc);
		superBu.executeForm(sc);

		superBu.signForm(rr);
		superBu.executeForm(rr);

		superBu.signForm(pp);
		superBu.executeForm(pp);
		
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
