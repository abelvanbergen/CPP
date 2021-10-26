/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ninjatrap.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/17 15:34:02 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/06 14:16:01 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.class.hpp"

void		NinjaTrap::rangedAttack(const std::string& target)
{
	std::cout << "NINJA-TP <" << this->_Name << "> attacks " << target << " by trowing a NinjaStar causing " << this->_RangedAttackDamage << " point of damage!" << std::endl;
	return ;
}

void		NinjaTrap::meleeAttack(const std::string& target)
{
	std::cout << "NINJA-TP <" << this->_Name << "> attacks " << target << " with his kalisticks causing " << this->_RangedAttackDamage << " point of damage!" << std::endl;
	return ;
}

void		NinjaTrap::ninjaShoebox(const FragTrap& target)
{
	std::cout << "NINJA-TP <" << this->_Name << "> shows off his finising move to make sure " << target.getName() << " does not come any closer." << std::endl;
	return ;
}

void		NinjaTrap::ninjaShoebox(const ScavTrap& target)
{
	std::cout << "NINJA-TP <" << this->_Name << "> watching the cat out of the tree because he does not trust " << target.getName() << std::endl;
	return ;
}

void		NinjaTrap::ninjaShoebox(const NinjaTrap& target)
{
	std::cout << "NINJA-TP <" << this->_Name << "> gives " << target._Name << " a fistbump because it is his homie!" << std::endl;
	return ;
}

void		NinjaTrap::ninjaShoebox(const ClapTrap& target)
{
	std::cout << "NINJA-TP <" << this->_Name << "> can't give " << target.getName() << " a Huge because Corona" << std::endl;
	return ;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& srcs)
{
	std::cout << "NinjaTrap assignment operator called" << std::endl;
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

NinjaTrap::NinjaTrap(const NinjaTrap &srcs) : ClapTrap(srcs)
{
	std::cout << "NinjaTrap copy constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string& name) : ClapTrap(name, "Ninja-TP")
{
	std::cout << "Ninja-TP jumps out of a whirlwind" << std::endl;
	_Hp = 60;
	_Max_Hp = 60;
	_Ep = 120;
	_Max_Ep = 120;
	_Level = 1;
	_MeleeAttackDamage = 60;
	_RangedAttackDamage = 5;
	_ArmorDamageReduction = 0;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Ninja-TP jumps back into the whirlwind" << std::endl;
	return ;
}
