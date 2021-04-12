/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:07:16 by kycho             #+#    #+#             */
/*   Updated: 2021/04/12 15:36:44 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void print(T const & x)
{
	std::cout << x << std::endl;
	return ;
}

template <typename T>
void iter(T *arr, int len, void (*func)(T const &ref))
{
	if (arr == NULL || len == 0 || func == NULL)
		return ;
	
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

#endif
