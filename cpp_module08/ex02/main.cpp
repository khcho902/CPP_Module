/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:41:34 by kycho             #+#    #+#             */
/*   Updated: 2021/04/13 15:25:25 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"
#include "mutantstack.cpp"

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
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	print(mstack.begin(), mstack.end());

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	print(mstack.begin(), mstack.end());

	mstack.push(100);
	mstack.push(200);

	print(mstack.begin(), mstack.end());

	mstack.pop();
	mstack.pop();

	print(mstack.begin(), mstack.end());

	mstack.push(0);

	print(mstack.begin(), mstack.end());
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	std::cout << s.size() << std::endl;

	return 0;
}
