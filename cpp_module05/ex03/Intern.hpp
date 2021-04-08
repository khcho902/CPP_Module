/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:17:36 by kycho             #+#    #+#             */
/*   Updated: 2021/04/08 14:01:21 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	Form* makeShrubberyCreationForm(const std::string target) const;
	Form* makeRobotomyRequestForm(const std::string target) const;
	Form* makePresidentialPardonForm(const std::string target) const;

public:
	Intern(void);
	Intern(const Intern& other);
	~Intern();

	Intern& operator=(const Intern& other);

	Form* makeForm(const std::string formName, const std::string target) const;

	class InvalidFormNameException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

#endif
