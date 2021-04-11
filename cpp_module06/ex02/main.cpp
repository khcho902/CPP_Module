/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:59:07 by kycho             #+#    #+#             */
/*   Updated: 2021/04/11 22:27:08 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate(void)
{
	srand(clock());

	int num = rand() % 3;

	if (num == 0)
		return dynamic_cast<Base *>(new A);
	else if (num == 1)
		return dynamic_cast<Base *>(new B);
	else
		return dynamic_cast<Base *>(new C);
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
	identify_from_pointer(&p);
}

int main(void)
{
	A* a_ptr = new A;
	A& a_ref = *a_ptr;
	identify_from_pointer(dynamic_cast<Base *>(a_ptr));
	identify_from_reference(dynamic_cast<Base &>(a_ref));

	B* b_ptr = new B;
	B& b_ref = *b_ptr;
	identify_from_pointer(dynamic_cast<Base *>(b_ptr));
	identify_from_reference(dynamic_cast<Base &>(b_ref));

	C* c_ptr = new C;
	C& c_ref = *c_ptr;
	identify_from_pointer(dynamic_cast<Base *>(c_ptr));
	identify_from_reference(dynamic_cast<Base &>(c_ref));

	std::cout << "===================" << std::endl;

	Base *base_ptr = generate();
	identify_from_pointer(base_ptr);
	identify_from_reference(*base_ptr);

	return 0;	
}
