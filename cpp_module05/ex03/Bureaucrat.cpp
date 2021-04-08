/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:18:20 by kycho             #+#    #+#             */
/*   Updated: 2021/04/07 17:02:37 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) :
	name("default"),
	grade(150)
{}

Bureaucrat::Bureaucrat(const Bureaucrat& other) :
	name(other.name),
	grade(other.grade)
{}

Bureaucrat::Bureaucrat(const std::string name, int grade) :
	name(name),
	grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	grade = other.grade;
	return *this;
}

const std::string Bureaucrat::getName(void) const
{
	return name;
}

int Bureaucrat::getGrade(void) const
{
	return grade;
}

void Bureaucrat::increaseGrade(void)
{
	grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decreaseGrade(void)
{
	grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << "<" << name << "> signs <" << form.getName() << ">" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "<" << name << "> cannot sign <" << form.getName() << "> because <" << e.what() << ">" << std::endl;
	}	
}

void Bureaucrat::executeForm(Form& form) const
{
	try
	{
		form.execute(*this);
		std::cout << "<" << name << "> executes <" << form.getName() << ">" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "<" << name << "> cannot execute <" << form.getName() << "> because <" << e.what() << ">" << std::endl;
	}	
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException : Grade too height!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException : Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade()  << ">";
	return os;
}
