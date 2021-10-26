/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 12:50:52 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/15 13:09:14 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << this->_weapon->getType()<< std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB Constructor called" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB Destructor called" << std::endl;
	return ;
}
