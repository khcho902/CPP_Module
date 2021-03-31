/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:12:50 by kycho             #+#    #+#             */
/*   Updated: 2021/04/01 01:40:55 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(const FragTrap& frag_trap);
	FragTrap(const std::string& name);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& frag_trap);

	void		vaulthunter_dot_exe(std::string const & target);
};

#endif
