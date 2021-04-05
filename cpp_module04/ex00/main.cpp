/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:40:21 by kycho             #+#    #+#             */
/*   Updated: 2021/04/05 21:09:30 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
    {
        Sorcerer robert("Robert", "the Magnificent");

        Victim jim("Jimmy");
        Peon joe("Joe");

        std::cout << robert << jim << joe;

        robert.polymorph(jim);
        robert.polymorph(joe);
    }

    std::cout << "---------------------------------" << std::endl;

    {
        Sorcerer steven("Steven", "the Socerer Supreme");

        Victim *james = new Victim("James");
        Victim *jin = new Peon("Jin");

        std::cout << steven << *james << *jin;

        steven.polymorph(*james);
        steven.polymorph(*jin);

        james->getPolymorphed();
        jin->getPolymorphed();

        delete james;
        delete jin;
    }    


    return 0;
}