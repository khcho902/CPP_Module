/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 02:18:49 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 02:48:18 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	Enemy(void);
	
protected:
	int hp;
	std::string type;

public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy& other);
	virtual ~Enemy();

	Enemy& operator=(const Enemy& other);

	std::string const getType(void) const;
	int getHP(void) const;

	virtual void takeDamage(int damage);
};

#endif
