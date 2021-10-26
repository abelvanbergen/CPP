/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 13:05:06 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/06 11:46:37 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

void	ScavTrap::printClass(void)
{
	std::cout << "Scav-TP ___________________________" << std::endl;
	std::cout << "Hp: " << _Hp << std::endl;
	std::cout << "Max_Hp: " << _Max_Hp << std::endl;
	std::cout << "Ep: " << _Ep << std::endl;
	std::cout << "Max_Ep: " << _Max_Ep << std::endl;
	std::cout << "Level: " << _Level << std::endl;
	std::cout << "Name: " << _Name << std::endl;
	std::cout << "MeleeAttackDamage: " << _MeleeAttackDamage << std::endl;
	std::cout << "RangedAttackDamage: " << _RangedAttackDamage << std::endl;
	std::cout << "ArmorDamageReduction: " << _ArmorDamageReduction << std::endl <<std::endl;
}

int		ScavTrap::getHp(void) const
{
	return this->_Hp;
}

int		ScavTrap::getMaxHp(void) const
{
	return this->_Max_Hp;
}

int		ScavTrap::getEp(void) const
{
	return this->_Ep;
}

int		ScavTrap::getMaxEp(void) const
{
	return this->_Max_Ep;
}

int		ScavTrap::getLevel(void) const
{
	return this->_Level;
}

std::string	ScavTrap::getName(void) const
{
	return this->_Name;
}

int		ScavTrap::getMeleeAttackDamage(void) const
{
	return this->_MeleeAttackDamage ;
}

int		ScavTrap::getRangedAttackDamage(void) const
{
	return this->_RangedAttackDamage ;
}

int		ScavTrap::getArmorDamageReduction(void) const
{
	return this->_ArmorDamageReduction;
}

void	ScavTrap::rangedAttack(const std::string& target)
{
	std::cout << "SCAV-TP <" << this->_Name << "> attacks " << target << " with a bow and arrow " << this->_RangedAttackDamage << " point of damage!" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(const std::string& target)
{
	std::cout << "SCAV-TP <" << this->_Name << "> gives " << target << " the kieteldood from close casuing " << this->_MeleeAttackDamage << " point of damage!" << std::endl;
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_Name << " will be Repaired for max " << amount << " Hp." << std::endl;
	this->_Hp += amount;
	if (this->_Hp > this->_Max_Hp)
		_Hp = _Max_Hp;
	std::cout << this->_Name << " new Hp is " << this->_Hp << std::endl;
	return ;
}

void	ScavTrap::challengeNewcomer(const std::string& target)
{
	std::string attacks[] = {"Icebucket", "cinnamon", "atje", "tide-pods", "chubby bunny"};
	int index = rand() % 5;
	std::cout << "Scav-TP <" << this->_Name << "> wants to challenge " << target << " with a " << attacks[index] << " challenge!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &srcs)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	this->_Hp = srcs.getHp();
	this->_Max_Hp = srcs.getMaxHp();
	this->_Ep = srcs.getEp();
	this->_Max_Ep = srcs.getMaxEp();
	this->_Level = srcs.getLevel();
	this->_Name = srcs.getName();
	this->_MeleeAttackDamage = srcs.getMeleeAttackDamage();
	this->_RangedAttackDamage = srcs.getRangedAttackDamage();
	this->_ArmorDamageReduction = srcs.getArmorDamageReduction();
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &srcs)
{
	std::cout << "SCAV-Trap copy constructor called" << std::endl;
	*this = srcs;
}

ScavTrap::ScavTrap(std::string name) : _Hp(100), _Max_Hp(100), _Ep(50), _Max_Ep(50), _Level(1), _Name(name), _MeleeAttackDamage(20), _RangedAttackDamage(15), _ArmorDamageReduction(3)
{
	std::cout << "SCAV-TP was created as a message" <<std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "The message got decapetaded" <<std::endl;
	return ;
}
