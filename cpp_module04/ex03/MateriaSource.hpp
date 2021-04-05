/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:36:47 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 17:58:02 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	AMateria* inventory[4];

public:
	MateriaSource(void);
	MateriaSource(const MateriaSource& other);
	~MateriaSource();

	MateriaSource& operator=(const MateriaSource& other);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
