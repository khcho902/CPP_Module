/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 02:36:38 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 02:40:33 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant(void);
	SuperMutant(const SuperMutant& other);
	~SuperMutant();

	SuperMutant& operator=(const SuperMutant& other);

	void takeDamage(int damage);
};

#endif
