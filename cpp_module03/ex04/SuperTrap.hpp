/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:57:31 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 15:59:36 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(void);
	SuperTrap(const SuperTrap& super_trap);
	SuperTrap(const std::string& name);
	~SuperTrap();

	SuperTrap&	operator=(const SuperTrap& super_trap);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
};

#endif
