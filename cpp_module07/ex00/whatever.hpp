/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:41:46 by kycho             #+#    #+#             */
/*   Updated: 2021/04/12 14:49:15 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& value1, T& value2)
{
	T tmp = value1;
	value1 = value2;
	value2 = tmp;
}

template <typename T>
T& min(T& value1, T& value2)
{
	if (value1 < value2)
		return value1;
	else
		return value2;
}

template <typename T>
T& max(T& value1, T& value2)
{
	if (value1 > value2)
		return value1;
	else
		return value2;
}

#endif
