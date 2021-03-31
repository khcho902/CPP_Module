/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:26:19 by kycho             #+#    #+#             */
/*   Updated: 2021/03/31 20:52:25 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(const ScavTrap& scav_trap);
	ScavTrap(const std::string& name);
	~ScavTrap();

	ScavTrap&	operator=(const ScavTrap& scav_trap);

	void		challengeNewcomer(std::string const & target);
};

#endif