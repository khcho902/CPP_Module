/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:41:28 by kycho             #+#    #+#             */
/*   Updated: 2021/04/02 16:20:49 by kycho            ###   ########.fr       */
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
    ~Victim();

    Victim& operator=(const Victim& victim);

    std::string getName(void) const;
    virtual void getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream& os, const Victim& victim);

#endif
