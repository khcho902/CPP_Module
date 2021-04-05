/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:55:20 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 13:08:30 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{
	int count;
	ISpaceMarine** units;

public:
	Squad(void);
	Squad(const Squad& other);
	~Squad();

	Squad& operator=(const Squad& other);

	int getCount() const;
	ISpaceMarine* getUnit(int idx) const;
	int push(ISpaceMarine* marine);
};

#endif
