/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/22 12:15:05 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/01 17:16:53 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.class.hpp"

void		SuperTrap::rangedAttack(const std::string& target)
{
	FragTrap::rangedAttack(target);
	return ;
}

void		SuperTrap::meleeAttack(const std::string& target)
{
	NinjaTrap::meleeAttack(target);
	return ;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap& srcs)
{
	std::cout << "SuperTrap assignment operator called" << std::endl;
	this->_Type = srcs._Type;
	this->_Hp = srcs._Hp;
	this->_Max_Hp = srcs._Max_Hp;
	this->_Ep = srcs._Ep;
	this->_Max_Ep = srcs._Max_Ep;
	this->_Level = srcs._Level;
	this->_Name = srcs._Name;
	this->_MeleeAttackDamage = srcs._MeleeAttackDamage;
	this->_RangedAttackDamage = srcs._RangedAttackDamage;
	this->_ArmorDamageReduction = srcs._ArmorDamageReduction;
	return *this;
}

SuperTrap::SuperTrap(const SuperTrap &srcs) : ClapTrap(srcs), FragTrap(srcs), NinjaTrap(srcs)
{
	std::cout << "SuperTrap copy constructor called" << std::endl;
	return ;
}

SuperTrap::SuperTrap(const std::string& name) : ClapTrap(name, "Super-TP"), FragTrap(name), NinjaTrap(name)
{
	std::cout << "Super-TP falls out of the sky" << std::endl;
	_Hp = 100;						//FT
	_Max_Hp = 100;					//FT
	_Ep = 120;						//NT
	_Max_Ep = 120;					//NT
	_Level = 1;
	_MeleeAttackDamage = 60;		//NT
	_RangedAttackDamage = 20;		//FT
	_ArmorDamageReduction = 5;		//FT
	// _Type = "Super-TP"
	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Super-TP is drips into nothing" << std::endl;
	return ;
}
