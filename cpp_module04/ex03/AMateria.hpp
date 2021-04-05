/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:26:27 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 18:29:34 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	AMateria(void);
	
protected:
	std::string type;
	unsigned int _xp;

public:
	AMateria(std::string const & type);
	AMateria(const AMateria& other);
	virtual ~AMateria();

	AMateria& operator=(const AMateria& other);

	std::string const & getType(void) const;
	unsigned int getXP(void) const;
	
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);
};

#endif
