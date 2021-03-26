/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 21:26:34 by kycho             #+#    #+#             */
/*   Updated: 2021/03/26 21:47:00 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string Human::identify(void) const
{
	return (brain.identify());
}

const Brain &Human::getBrain(void) const
{
	return (brain);
}
