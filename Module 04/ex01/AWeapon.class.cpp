/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 12:07:24 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/04 12:36:27 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.class.hpp"

std::string		AWeapon::getName(void) const
{
	return this->_Name;
}

int				AWeapon::getAPCost(void) const
{
	return this->_ActionPoints;
}

int				AWeapon::getDamage(void) const
{
	return this->_DamagePoints;
}

AWeapon&		AWeapon::operator=(const AWeapon& srcs)
{
	std::cout << "Aweapon assignment operator called" << std::endl;
	this->_Name = srcs._Name;
	this->_DamagePoints = srcs._DamagePoints;
	this->_ActionPoints = srcs._ActionPoints;
	return *this;
}

AWeapon::AWeapon(const AWeapon& srcs)
{
	std::cout << "Aweapon copy constructor called" << std::endl;
	*this = srcs;
	return ;
}

AWeapon::AWeapon(const std::string& name, const int damagepoints, const int actionpoints) : _Name(name), _DamagePoints(damagepoints), _ActionPoints(actionpoints)
{
	std::cout << "AWeapon constructor called" << std::endl;
	return ;
}

AWeapon::~AWeapon(void)
{
	std::cout << "Aweapon destructor called" << std::endl;
	return ;
}
