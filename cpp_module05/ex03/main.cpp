/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:18:18 by kycho             #+#    #+#             */
/*   Updated: 2021/04/08 14:19:24 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat bu("bu", 1);
		Intern intern;
		Form *form;

		form = intern.makeForm("shrubbery_creation", "target1");
		bu.executeForm(*form);
		bu.signForm(*form);
		bu.executeForm(*form);
		delete form;

		form = intern.makeForm("robotomy_request", "target2");
		bu.executeForm(*form);
		bu.signForm(*form);
		bu.executeForm(*form);
		delete form ;

		form = intern.makeForm("presidential_pardon", "target3");
		bu.executeForm(*form);
		bu.signForm(*form);
		bu.executeForm(*form);
		delete form ;

		form = intern.makeForm("no_match_form_name", "target4");		
		bu.executeForm(*form);
		bu.signForm(*form);
		bu.executeForm(*form);
		delete form ;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
