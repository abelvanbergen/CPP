/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapen.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 10:31:24 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/02/06 12:43:15 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

void		Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string&		Weapon::getType()
{
	return(this->_type);
}

Weapon::Weapon(std::string weapon) : _type(weapon)
{
	std::cout << "Weapon Constructor called" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon Destructor called" << std::endl;
	return ;
}
