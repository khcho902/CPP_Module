/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 18:24:48 by kycho             #+#    #+#             */
/*   Updated: 2021/04/06 14:23:05 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	{
		Character *me = new Character("me");

		std::cout << *me;

		Enemy *b = new RadScorpion();

		AWeapon *pr = new PlasmaRifle();
		AWeapon *pf = new PowerFist();

		me->equip(pr);
		std::cout << *me;
		me->equip(pf);

		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;

		delete me;
		delete pr;
		delete pf;
	}

	std::cout << "------------------------------" << std::endl;

	{
		Character *me = new Character("me");
		std::cout << *me;  // ap : 40
		
		AWeapon *pr = new PlasmaRifle();  // ap_cost : 5, damage : 21
		AWeapon *pf = new PowerFist();    // ap_cost : 8, damage : 50

		Enemy *b = new SuperMutant();  // hp : 170

		me->attack(b);			// do nothing
		std::cout << *me;
	
		me->equip(pf);
		me->attack(b);			// me[ap : 40 -> 32], b[hp: 170 -> 123]
		std::cout << *me;

		me->attack(b);			// me[ap : 32 -> 24], b[hp: 123 -> 76]
		me->attack(b);			// me[ap : 24 -> 16], b[hp: 76 -> 29]
		me->attack(b);			// me[ap : 16 -> 8], b[hp: 29 -> 0]  
		std::cout << *me;

		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;


		Enemy *b2 = new RadScorpion();  // hp : 80

		me->equip(pr);
		std::cout << *me;
		
		me->attack(b2);			// me[ap : 8 -> 3], b[hp: 80 -> 59]
		std::cout << *me;
		
		me->attack(b2);			// do nothing
		std::cout << *me;

		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		
		me->recoverAP();		// me[ap : 8 -> 18]
		me->recoverAP();		// me[ap : 18 -> 28]
		me->recoverAP();		// me[ap : 28 -> 38]
		me->recoverAP();		// me[ap : 38 -> 40]
		me->recoverAP();		// me[ap : 40 -> 40]
		std::cout << *me;

		me->attack(b2);			// me[ap : 40 -> 35], b[hp: 59 -> 38]
		me->attack(b2);			// me[ap : 35 -> 30], b[hp: 38 -> 17]
		me->attack(b2);			// me[ap : 30 -> 25], b[hp: 17 -> 0]
		std::cout << *me;

		delete me;
		delete pr;
		delete pf;
	}

	return 0;
}
