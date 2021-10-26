/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 10:55:38 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/04/30 13:46:46 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

void		Character::deleteMateria(void)
{
	for(int i = 0; i < this->_place; i++)
		delete this->_inventory[i];
}

const std::string&	Character::getName() const
{
	return this->_name;
}

void				Character::equip(AMateria* m)
{
	if (this->_place < 4)
	{
		this->_inventory[this->_place] = m;
		this->_place += 1;
	}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->_place)
	{
		for(int i = idx + 1; i < 4; i++)
			this->_inventory[i - 1] = this->_inventory[i];
		this->_inventory[3] = 0;
		this->_place -= 1;
	}
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->_place)
		this->_inventory[idx]->use(target);
}

Character&	Character::operator=(const Character& srcs)
{
	if (this->_place > 0)
		this->deleteMateria();
	this->_place = srcs._place;
	for(int i = 0; i < srcs._place; i++)
		this->_inventory[i] = srcs._inventory[i]->clone();
	return *this;
}

Character::Character(const Character& srcs) : _name(srcs._name)
{
	this->_place = 0;
	*this = srcs;
	return ;
}

Character::Character(const std::string name) : _name(name), _place(0)
{
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
	return ;
}

Character::~Character()
{
	this->deleteMateria();
	return ;
}
