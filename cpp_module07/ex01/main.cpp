/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:07:05 by kycho             #+#    #+#             */
/*   Updated: 2021/04/12 15:36:39 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

class Awesome
{
public:
	Awesome(void) : _n(42) { return ; }
	int get(void) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, Awesome const &rhs)
{
	o << rhs.get();
	return o;
}

int main(void)
{
	int arr1[] = {1, 2, 3, 4, 5};
	iter(arr1,5, print);

	std::cout << "----------------------" << std::endl;

	std::string arr2[] = {"hi", "hello", "world"};
	iter(arr2, 3, print);

	std::cout << "----------------------" << std::endl;

	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return 0;
}