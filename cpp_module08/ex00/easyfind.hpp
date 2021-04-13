/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 01:37:10 by kycho             #+#    #+#             */
/*   Updated: 2021/04/13 15:27:39 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
int &easyfind(T &container, int n)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), n);

	if (iter == container.end())
		throw std::runtime_error("Not found!");

	return *iter;
}

#endif
