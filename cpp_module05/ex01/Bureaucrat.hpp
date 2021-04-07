/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:18:22 by kycho             #+#    #+#             */
/*   Updated: 2021/04/07 12:46:09 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	const std::string	name;
	int					grade;

public:
	Bureaucrat(void);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& other);

	const std::string getName(void) const;
	int getGrade(void) const;

	void increaseGrade(void);
	void decreaseGrade(void);

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
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
