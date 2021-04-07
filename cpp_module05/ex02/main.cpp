/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:18:18 by kycho             #+#    #+#             */
/*   Updated: 2021/04/07 16:41:52 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat b("b", 100);

	Form form1("form1", 80, 80);
	std::cout << form1 << std::endl;

	Form form2("form2", 110, 110);
	std::cout << form2 << std::endl;

	b.signForm(form1);
	b.signForm(form2);

	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	try
	{
		Form form("form",  0, 0);

		std::cout << "good~~" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form form("form",  151, 151);

		std::cout << "good~~" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
