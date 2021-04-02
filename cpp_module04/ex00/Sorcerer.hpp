/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:12:55 by kycho             #+#    #+#             */
/*   Updated: 2021/04/02 12:57:36 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
    std::string name;
    std::string title;
    Sorcerer(void);

public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(const Sorcerer& sorcerer);
    ~Sorcerer();

    Sorcerer& operator=(const Sorcerer& sorcerer);

    std::string getName(void) const;
    std::string getTitle(void) const;

    void polymorph(const Victim& victim) const;
};

std::ostream& operator<<(std::ostream& os, const Sorcerer& sorcerer);

#endif
