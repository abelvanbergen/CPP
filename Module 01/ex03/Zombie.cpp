/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 13:05:08 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/14 18:14:56 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		Zombie::announce(void)
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void		Zombie::setName(std::string name)
{
	this->_name = name;
}

void		Zombie::setType(std::string type)
{
	this->_type = type;
}

std::string	Zombie::getName()
{
	return(this->_name);
}

std::string	Zombie::getType()
{
	return(this->_type);
}

Zombie::Zombie(void)
{
	std::cout << "Zombie Constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie Destructor called" << std::endl;
	return ;
}
