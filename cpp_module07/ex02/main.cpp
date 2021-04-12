/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:46:33 by kycho             #+#    #+#             */
/*   Updated: 2021/04/12 17:10:41 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> arr(10);

	for(int i = 0; i < 10; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	for(int i = 0; i < 10; i++)
		arr[i] = i;

	for(int i = 0; i < 10; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;


	try
	{
		std::cout << arr[20] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	const Array<int> arr2(5);

	/*
	for(int i = 0; i < 5; i++)
		arr2[i] = i;
	*/
	for(int i = 0; i < 5; i++)
	{
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;
	
	return 0;
}
