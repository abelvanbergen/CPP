/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/17 11:35:47 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/06 14:10:55 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

void	ClapTrap::printClass(void)
{
	std::cout << this->_Type <<"____________________________" << std::endl;
	std::cout << "Hp: " << this->_Hp << std::endl;
	std::cout << "Max_Hp: " << this->_Max_Hp << std::endl;
	std::cout << "Ep: " << this->_Ep << std::endl;
	std::cout << "Max_Ep: " << this->_Max_Ep << std::endl;
	std::cout << "Level: " << this->_Level << std::endl;
	std::cout << "Name: " << this->_Name << std::endl;
	std::cout << "MeleeAttackDamage: " << this->_MeleeAttackDamage << std::endl;
	std::cout << "RangedAttackDamage: " << this->_RangedAttackDamage << std::endl;
	std::cout << "ArmorDamageReduction: " << this->_ArmorDamageReduction << std::endl <<std::endl;
}

int		ClapTrap::getHp(void) const
{
	return this->_Hp;
}

int		ClapTrap::getMaxHp(void) const
{
	return this->_Max_Hp;
}

int		ClapTrap::getEp(void) const
{
	return this->_Ep;
}

int		ClapTrap::getMaxEp(void) const
{
	return this->_Max_Ep;
}

int		ClapTrap::getLevel(void) const
{
	return this->_Level;
}

std::string	ClapTrap::getName(void) const
{
	return this->_Name;
}

int		ClapTrap::getMeleeAttackDamage(void) const
{
	return this->_MeleeAttackDamage ;
}

int		ClapTrap::getRangedAttackDamage(void) const
{
	return this->_RangedAttackDamage ;
}

int		ClapTrap::getArmorDamageReduction(void) const
{
	return this->_ArmorDamageReduction;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	damageDealt = amount - this->_ArmorDamageReduction;
	std::cout << "the damage dealt is " << damageDealt << std::endl;
	if (damageDealt < 0)
		damageDealt = 0;
	this->_Hp -= damageDealt;
	if (this->_Hp < 0)
		this->_Hp = 0;
	std::cout << this->_Name << " hass " << this->_Hp << " Hp left." << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_Name << " will be Repaired for max " << amount << " Hp." << std::endl;
	this->_Hp += amount;
	if (this->_Hp > this->_Max_Hp)
		_Hp = _Max_Hp;
	std::cout << this->_Name << " new Hp is " << this->_Hp << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& srcs)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
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

ClapTrap::ClapTrap(const ClapTrap& srcs)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = srcs;
}

ClapTrap::ClapTrap(const std::string& name, const std::string& type) : _Type(type), _Name(name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string& name) : _Type("Clap-TP"), _Name(name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}
