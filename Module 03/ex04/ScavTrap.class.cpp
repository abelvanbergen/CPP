/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 13:05:06 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/02/17 14:54:48 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

void	ScavTrap::rangedAttack(const std::string& target)
{
	std::cout << "SCAV-TP <" << this->_Name << "> attacks " << target << " with a bow and arrow " << this->_RangedAttackDamage << " point of damage!" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(const std::string& target)
{
	std::cout << "FR4G-TP <" << this->_Name << "> gives " << target << " the kieteldood from close casuing " << this->_MeleeAttackDamage << " point of damage!" << std::endl;
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

ScavTrap::ScavTrap(const ScavTrap &srcs) : ClapTrap(srcs)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, "SCAV-TP")
{
	std::cout << "Scav-TP was created as a message" <<std::endl;
	_Hp = 100;
	_Max_Hp = 100;
	_Ep = 100;
	_Max_Ep = 100;
	_Level = 1;
	_MeleeAttackDamage = 30;
	_RangedAttackDamage = 20;
	_ArmorDamageReduction = 5;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "The message got decapetaded" <<std::endl;
	return ;
}
