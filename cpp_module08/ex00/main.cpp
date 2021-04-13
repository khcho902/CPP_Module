/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 01:37:02 by kycho             #+#    #+#             */
/*   Updated: 2021/04/13 15:27:48 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

template <typename Iter>
void print(Iter begin, Iter end) {
  while (begin != end) {
    std::cout << "[" << *begin << "] ";
    begin++;
  }
  std::cout << std::endl;
}

int main(void)
{
	std::vector<int> vec;
	std::list<int> lst;
	std::deque<int> deq;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
		lst.push_back(i);
		deq.push_back(i);
	}

	print(vec.begin(), vec.end());
	print(lst.begin(), lst.end());
	print(deq.begin(), deq.end());

	try
	{
		easyfind(vec, 4);
		std::cout << "Found!!" << std::endl;
		easyfind(vec, 8);
		std::cout << "Found!!" << std::endl;
		easyfind(vec, 12);
		std::cout << "Found!!" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;


	try
	{
		easyfind(lst, 4);
		std::cout << "Found!!" << std::endl;
		easyfind(lst, 8);
		std::cout << "Found!!" << std::endl;
		easyfind(lst, 12);
		std::cout << "Found!!" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;

	try
	{
		easyfind(deq, 4);
		std::cout << "Found!!" << std::endl;
		easyfind(deq, 8);
		std::cout << "Found!!" << std::endl;
		easyfind(deq, 12);
		std::cout << "Found!!" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	
	return 0;
}