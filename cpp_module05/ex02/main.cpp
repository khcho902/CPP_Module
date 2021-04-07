/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:18:18 by kycho             #+#    #+#             */
/*   Updated: 2021/04/07 19:34:13 by kycho            ###   ########.fr       */
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
	Bureaucrat bu("bu", 1);

	ShrubberyCreationForm sc("target1");
	RobotomyRequestForm rr("target2");
	PresidentialPardonForm pp("target3");
	
	bu.executeForm(sc);
	bu.executeForm(rr);
	bu.executeForm(pp);

	bu.signForm(sc);
	bu.executeForm(sc);

	bu.signForm(rr);
	bu.executeForm(rr);

	bu.signForm(pp);
	bu.executeForm(pp);
	
	return 0;
}
