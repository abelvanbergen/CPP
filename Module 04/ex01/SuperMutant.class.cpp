/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.class.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 13:54:02 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/08 14:17:42 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.class.hpp"

void			SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
	return ;
}

SuperMutant&	SuperMutant::operator=(const SuperMutant& srcs)
{
	std::cout << "SuperMutant assignment operator called" << std::endl;
	Enemy::operator=(srcs);
	return *this;
}

SuperMutant::SuperMutant(const SuperMutant& srcs) : Enemy(srcs)
{
	std::cout << "SuperMutant copy constructor called" << std::endl;
	return ;
}

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}
