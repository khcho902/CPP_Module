/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:18:18 by kycho             #+#    #+#             */
/*   Updated: 2021/04/07 14:27:36 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat test("test", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat test("test", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat test("test", 1);
		
		test.decreaseGrade();
		std::cout << test << std::endl;

		test.increaseGrade();
		std::cout << test << std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat test("test", 1);
		
		std::cout << "Call increaseGrade() ~ " << std::endl; 
		test.increaseGrade();
		std::cout << test << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat test("test", 150);
		
		std::cout << "Call decreaseGrade() ~ " << std::endl; 
		test.decreaseGrade();
		std::cout << test << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
