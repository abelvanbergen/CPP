/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 15:44:42 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/04/27 13:17:54 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

void			Character::recoverAP(void)
{
	int	APtoRecover = 10;
	if (this->_AP > 30)
		APtoRecover = 40 - this->_AP;
	std::cout << this->_Name << " recovers " << APtoRecover << " Action points";
	this->_AP += APtoRecover;
	std::cout << "It's new AP is " << this->_AP << std::endl;
	return ;
}


void			Character::attack(Enemy* enemy)
{
	if (this->_Weapon != NULL)
	{
		if (this->_AP >= this->_Weapon->getAPCost())
		{
			std::cout << this->_Name << " attacks " << enemy->getType() << " with a " << this->_Weapon->getName() << std::endl;
			this->_Weapon->Attack();
			enemy->takeDamage(this->_Weapon->getDamage());
			if (enemy->getHP() == 0)
			{
				std::cout << enemy->getType() << " has no HP left" << std::endl;
				delete enemy;
			}
			this->_AP -= this->_Weapon->getAPCost();
		}
		else
		{
			std::cout << "Character does not have enough Action Points" << std::endl;
		}
	}
	return ;
}

void			Character::equip(AWeapon* weapon)
{
	this->_Weapon = weapon;
	return ;
}

std::string		Character::getName(void) const
{
	return this->_Name;
}

int				Character::getAP(void) const
{
	return this->_AP;
}

AWeapon*		Character::getWeapon(void) const
{
	return this->_Weapon;
}

std::ostream&			operator<<(std::ostream& out, const Character& obj)
{
	if (obj.getWeapon() != NULL)
		out << obj.getName() << " has " << obj.getAP() << " AP and wields a " << obj.getWeapon()->getName() << std::endl;
	else
		out << obj.getName() << " has " << obj.getAP() << " AP and is unarmed"  << std::endl;
	return out;
}

Character&	Character::operator=(const Character& srcs)
{
	std::cout << "Character assignment operator called" << std::endl;
	this->_Name = srcs._Name;
	this->_AP = srcs._AP;
	this->_Weapon = srcs._Weapon;
	return *this;
}

Character::Character(const Character& srcs)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = srcs;
	return ;
}

Character::Character(const std::string& name) : _Name(name), _AP(40), _Weapon(NULL)
{

	std::cout << "Character constructor called" << std::endl;
	return ;
}

Character::~Character(void)
{
	std::cout << "character destructor called" << std::endl;
	return ;
}
