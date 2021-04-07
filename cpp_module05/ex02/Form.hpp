/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:50:06 by kycho             #+#    #+#             */
/*   Updated: 2021/04/07 17:59:58 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	const std::string name;
	bool isSigned;
	const int signGrade;
	const int executeGrade;

public:
	Form(void);
	Form(const Form& other);
	Form(std::string name, int signGrade, int executeGrade);
	virtual ~Form();

	Form& operator=(const Form& other);

	std::string getName(void) const;
	bool		getIsSigned(void) const;
	int			getSignGrade(void) const;
	int			getExecuteGrade(void) const;
	void		beSigned(const Bureaucrat& bureaucrat);

	virtual void execute(Bureaucrat const & executor) const = 0;
	void preprocess_execute(Bureaucrat const & executor) const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class NotSignedException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os , const Form& form);

#endif
