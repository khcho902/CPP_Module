/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:50:19 by kycho             #+#    #+#             */
/*   Updated: 2021/04/07 17:39:02 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
	name("default"),
	isSigned(false),
	signGrade(150),
	executeGrade(150)
{}

Form::Form(const Form& other) : 
	name(other.name),
	isSigned(false),
	signGrade(other.signGrade),
	executeGrade(other.executeGrade)
{}

Form::Form(std::string name, int signGrade, int executeGrade) : 
	name(name),
	isSigned(false),
	signGrade(signGrade),
	executeGrade(executeGrade)
{
	if (this->signGrade < 1 || this->executeGrade < 1)
		throw Form::GradeTooHighException();
	if (this->signGrade > 150 || this->executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form& Form::operator=(const Form& other)
{
	isSigned = other.isSigned;
	return *this;
}

std::string Form::getName(void) const
{
	return name;
}

bool		Form::getIsSigned(void) const
{
	return isSigned;
}

int			Form::getSignGrade(void) const
{
	return signGrade;
}

int			Form::getExecuteGrade(void) const
{
	return executeGrade;
}

void		Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > signGrade)
		throw Form::GradeTooLowException();

	isSigned = true;
}

void Form::preprocess_execute(Bureaucrat const & executor) const
{
	if (isSigned == false)
	{
		throw Form::NotSignedException();
	}
	if (executor.getGrade() > executeGrade)
	{
		throw Form::GradeTooLowException();
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException : Grade too height!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException : Grade too low!";
}


const char* Form::NotSignedException::what() const throw()
{
	return "NotSignedException : Not Signed!";
}

std::ostream& operator<<(std::ostream& os , const Form& form)
{
	os << "Form<" << form.getName() << " :  isSigned(" << form.getIsSigned() << "), signGrade(" << form.getSignGrade() << "), executeGrade(" << form.getExecuteGrade() << ")";
	return os;
}
