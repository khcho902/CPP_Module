/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:42:50 by kycho             #+#    #+#             */
/*   Updated: 2021/04/07 19:33:43 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("RobotomyRequestForm", 72, 45),
	target("default")
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
	Form(other),
	target(other.target)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	Form("RobotomyRequestForm", 72, 45),
	target(target)
{
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	Form::operator=(other);
	target = other.target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::preprocess_execute(executor);

	std::cout << "** Drrrrrrr........r.r.r.rrr...Drrrrrr... **" << std::endl;

	if (rand() % 2)
	{
		std::cout << "<" << target << "> has been robotomized successfully!!" << std::endl;
	}
	else
	{
		std::cout << "<" << target << ">'s robotomization has failed!!" << std::endl;
	}
}
