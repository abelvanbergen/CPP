/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 12:55:05 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/15 11:24:03 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"

void		Enemy::takeDamage(int damage)
{
	if (damage >= 0)
	{
		this->_HP -= damage;
		if (this->_HP < 0)
			this->_HP = 0;
	}
}

int			Enemy::getHP(void) const
{
	return this->_HP;
}

const std::string	Enemy::getType(void) const
{
	return this->_Type;
}

Enemy&		Enemy::operator=(const Enemy& srcs)
{
	std::cout << "Enemy assignment operator called" << std::endl;
	this->_HP = srcs._HP;
	this->_Type = srcs._Type;
	return *this;
}

Enemy::Enemy(const Enemy& srcs)
{
	*this = srcs;
	return ;
}

Enemy::Enemy(int hp, const std::string& type) : _HP(hp), _Type(type)
{
	std::cout << "Enemy constructor called" << std::endl;
	return ;
}

Enemy::~Enemy(void)
{
	std::cout << "Enemy destructor called" << std::endl;
	return ;
}
