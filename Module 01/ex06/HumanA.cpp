/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 10:47:19 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/15 12:01:04 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << this->_weapon.getType()<< std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name),  _weapon(weapon)
{
	std::cout << "HumanA Constructor called" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA Destructor called" << std::endl;
	return ;
}
