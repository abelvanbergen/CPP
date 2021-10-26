/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/12 11:25:47 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/06 13:52:30 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

void	FragTrap::printClass(void)
{
	std::cout << "FR4G-TP ___________________________" << std::endl;
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

int		FragTrap::getHp(void) const
{
	return this->_Hp;
}

int		FragTrap::getMaxHp(void) const
{
	return this->_Max_Hp;
}

int		FragTrap::getEp(void) const
{
	return this->_Ep;
}

int		FragTrap::getMaxEp(void) const
{
	return this->_Max_Ep;
}

int		FragTrap::getLevel(void) const
{
	return this->_Level;
}

std::string	FragTrap::getName(void) const
{
	return this->_Name;
}

int		FragTrap::getMeleeAttackDamage(void) const
{
	return this->_MeleeAttackDamage ;
}

int		FragTrap::getRangedAttackDamage(void) const
{
	return this->_RangedAttackDamage ;
}

int		FragTrap::getArmorDamageReduction(void) const
{
	return this->_ArmorDamageReduction;
}

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

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_Name << " will be Repaired for max " << amount << " Hp." << std::endl;
	this->_Hp += amount;
	if (this->_Hp > this->_Max_Hp)
		_Hp = _Max_Hp;
	std::cout << this->_Name << " new Hp is " << this->_Hp << std::endl;
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
		std::cout << "This attack costed 25 EnergyPoints. You have " << this->_Ep << " Energiepoints left" << std::endl;
	}
	return ;
}

FragTrap&	FragTrap::operator=(const FragTrap &srcs)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
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

FragTrap::FragTrap(const FragTrap &srcs)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = srcs;
}

FragTrap::FragTrap(std::string name) : _Hp(100), _Max_Hp(100), _Ep(100), _Max_Ep(100), _Level(1), _Name(name), _MeleeAttackDamage(30), _RangedAttackDamage(20), _ArmorDamageReduction(5)
{
	std::cout << "Fr4G-TP was creatod out of sawdust" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP went up in flames" << std::endl;
	return ;
}
