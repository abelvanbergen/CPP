/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 09:27:59 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 11:50:41 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.class.hpp"
#include "FishingRod.class.hpp"
#include "PlasmaRifle.class.hpp"
#include "PowerFist.class.hpp"

#include "Enemy.class.hpp"
#include "SuperMutant.class.hpp"
#include "RadScorpion.class.hpp"
#include "Lars.class.hpp"

#include "Character.class.hpp"

int sub_test()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
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
	//subject test did not have delete so I added them. You do not need to delete
	//enemy because he delets itself when it dies
	delete me;
	delete pr;
	delete pf;
	return 0;
}

void own_test(void)
{
	Character* me = new Character("Abel");
	Enemy* two = new SuperMutant();
	Lars* three = new Lars();
	Lars* four = new Lars(*three);
	AWeapon* pr = new PlasmaRifle();
	AWeapon* fr = new FishingRod();

	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	std::cout << *me << std::endl;
	me->equip(pr);
	std::cout << *me << std::endl;
	me->equip(fr);
	me->attack(two);
	me->attack(four);
	delete me;
	delete pr;
	delete fr;
	delete two;
	delete three;
	delete four;
}

int main(void)
{
	sub_test();
	own_test();
	system("leaks a.out");
}
