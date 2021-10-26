/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 09:20:08 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 11:59:39 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.class.hpp"
#include "Character.class.hpp"
#include "Cure.class.hpp"
#include "Ice.class.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.class.hpp"

void	asdf()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp1;
	AMateria* tmp2;
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->unequip(2);

	me->use(0, *bob);
	me->unequip(0);
	me->use(0, *bob);
	delete tmp1;
	delete bob;
	delete me;
	delete src;
	std::cout << "This awesome main is financed by the oh mighty Jonas #ad" << std::endl;
}

int		main(int ac, char **av)
{
	asdf();
	if (ac > 1 && !strcmp(av[1],"full"))
		system("leaks matter");
	else
	{
		system("leaks a.out >> leaks.txt");
		system("grep \"total leaked bytes\" leaks.txt");
		system("rm leaks.txt");
	}
	return (0);
}
