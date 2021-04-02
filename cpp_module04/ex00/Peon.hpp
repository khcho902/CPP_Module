/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:26:56 by kycho             #+#    #+#             */
/*   Updated: 2021/04/02 16:06:17 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
    Peon(void);

public:
    Peon(std::string name);
    Peon(const Peon& peon);
    ~Peon();

    Peon& operator=(const Peon& peon);
    
    void getPolymorphed(void) const;
};

#endif
