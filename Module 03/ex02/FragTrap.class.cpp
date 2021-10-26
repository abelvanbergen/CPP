/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/12 11:25:47 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/02/17 15:45:03 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

void	FragTrap::rangedAttack(const std::string& target)
{
	std::cout << "FR4G-TP <" << this->_Name << "> attacks " << target << " at range causing " << this->_RangedAttackDamage << " point of damage!" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(const std::string& target)
{
	std::cout << "FR4G-TP <" << this->_Name << "> attacks " << target << " with a knife causing " << this->_MeleeAttackDamage << " point of damage!" << std::endl;
	return ;
}

void	FragTrap::vaulthunter_dot_exe(const std::string& target)
{
	std::string attacks[] = {"a ac-130 causing", "bublegun", "a Icebeam", "a legoblock under his foot", "bitchclap"};
	int index = rand() % 5;
	if (this->_Ep < 25)
		std::cout << this->_Name << " is out of energy" << std::endl;
	else
	{
		std::cout << "FR4G-TP <" << this->_Name << "> attacks " << target << " with " << attacks[index] << " causing " << this->_MeleeAttackDamage << " point of damage!" << std::endl;
		this->_Ep -= 25;
		std::cout << "This attack costed 25 EnergyPoints. " << this->_Name << " has " << this->_Ep << " Energiepoints left" << std::endl;
	}
	return ;
}

FragTrap&	FragTrap::operator=(const FragTrap& srcs)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
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

FragTrap::FragTrap(const FragTrap &srcs) : ClapTrap(srcs)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name, "FR4G-TP")
{
	std::cout << "Fr4G-TP was creatod out of sawdust" << std::endl;
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

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP went up in flames" << std::endl;
	return ;
}
