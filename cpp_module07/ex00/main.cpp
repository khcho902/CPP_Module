/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:41:27 by kycho             #+#    #+#             */
/*   Updated: 2021/04/12 14:59:43 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

class Awesome 
{
public:
	Awesome(int n) : _n(n) {}

	bool operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
	bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
	bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
	bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
	bool operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
	bool operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n); }

	int getN(void) const { return _n; }

private:
	int _n;
};

int main(void)
{
	int a = 2;
	int b = 3;
	
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	std::cout << "------------------------------" << std::endl;

	Awesome aa(2);
	Awesome bb(3);
	
	::swap(aa, bb);
	std::cout << "aa = " << aa.getN() << ", bb = " << bb.getN() << std::endl;
	std::cout << "min( aa, bb ) = " << ::min(aa, bb).getN() << std::endl;
	std::cout << "max( aa, bb ) = " << ::max(aa, bb).getN() << std::endl;
	
	return 0;
}
