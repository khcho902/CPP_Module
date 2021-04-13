/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:13:13 by kycho             #+#    #+#             */
/*   Updated: 2021/04/13 15:38:31 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int main(void)
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "--------------------------------" << std::endl;


	Span sp2 = Span(3);

	try
	{
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		sp2.addNumber(10);
		std::cout << "addNumber success!!" << std::endl;
		sp2.addNumber(5);
		std::cout << "addNumber success!!" << std::endl;
		sp2.addNumber(5);
		std::cout << "addNumber success!!" << std::endl;
		sp2.addNumber(5);
		std::cout << "addNumber success!!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;



	std::cout << "--------------------------------" << std::endl;

	Span sp3 = Span(3000);

	std::vector<int> vec;
	for (int i = 0; i < 2000; i++)
	{
		vec.push_back(i + 1);
	}

	sp3.addNumber(vec.begin(), vec.end());

	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
}
