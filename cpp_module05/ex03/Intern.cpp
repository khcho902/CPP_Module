/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:17:43 by kycho             #+#    #+#             */
/*   Updated: 2021/04/08 14:10:14 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern& other)
{
	(void)other;
}
Intern::~Intern() {}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}

Form* Intern::makeForm(const std::string formName, const std::string target) const
{
	typedef Form* (Intern::*t_form_maker)(std::string target) const;

	std::string formNames[3] = {"shrubbery_creation", "robotomy_request", "presidential_pardon"};
	t_form_maker formMakers[3] = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};

	for (int i = 0; i <3; i++)
	{
		if (formName == formNames[i])
		{
			Form* newForm = (this->*(formMakers[i]))(target);
			std::cout << "Intern creates <" << newForm->getName() << ">" << std::endl;
			return newForm;
		}
	}
	throw InvalidFormNameException();
}

Form* Intern::makeShrubberyCreationForm(const std::string target) const
{
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomyRequestForm(const std::string target) const
{
	return new RobotomyRequestForm(target);
}

Form* Intern::makePresidentialPardonForm(const std::string target) const
{
	return new PresidentialPardonForm(target);
}

const char* Intern::InvalidFormNameException::what() const throw()
{
	return "InvalidFormNameException : There is no matched form name!";
}
