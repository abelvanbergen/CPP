/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 16:09:46 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/04/30 15:04:52 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.class.hpp"
#include <iostream>

void			Sorcerer::polymorph(const Victim& target) const
{
	std::cout << "Imperio!" << std::endl;
	target.getPolymorphed();
}

std::string		Sorcerer::getName(void) const
{
	return this->_Name;
}

std::string		Sorcerer::getTitle(void) const
{
	return this->_Title;
}

std::ostream&	operator<<(std::ostream& out, const Sorcerer& obj)
{
	out << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer& srcs)
{
	std::cout << "Sorcerer assignment operater called" << std::endl;
	this->_Name = srcs._Name;
	this->_Title = srcs._Title;
	return *this;
}

Sorcerer::Sorcerer(const Sorcerer& srcs)
{
	std::cout << this->_Name << ", " << this->_Title << ", is born!" << std::endl;
	*this = srcs;
	return ;
}

Sorcerer::Sorcerer(const std::string& name, const std::string& title) : _Name(name), _Title(title)
{
	// std::cout << "Sorcerer constructor called" << std::endl;
	std::cout << this->_Name << ", " << this->_Title << ", is born!" << std::endl;
	return ;
}

Sorcerer::~Sorcerer(void)
{
	// std::cout << "Sorcerer destructor called" << std::endl;
	std::cout << this->_Name << ", " << this->_Title << ", is dead. Consequences will never be te same!" << std::endl;
	return ;
}
