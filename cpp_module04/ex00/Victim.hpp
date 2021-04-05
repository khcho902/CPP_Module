/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:41:28 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 20:45:39 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
protected:
    std::string name;
    Victim(void);

public:
    Victim(std::string name);
    Victim(const Victim& victim);
    virtual ~Victim();

    Victim& operator=(const Victim& victim);

    std::string getName(void) const;
    virtual void getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream& os, const Victim& victim);

#endif
