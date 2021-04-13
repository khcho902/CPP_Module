/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 01:37:10 by kycho             #+#    #+#             */
/*   Updated: 2021/04/13 12:47:36 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename Iter>
void print(Iter begin, Iter end) {
  while (begin != end) {
    std::cout << "[" << *begin << "] ";
    begin++;
  }
  std::cout << std::endl;
}

template <typename T>
int &easyfind(T &container, int n)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), n);

	if (iter == container.end())
		throw std::runtime_error("Not found!");

	return *iter;
}

#endif
