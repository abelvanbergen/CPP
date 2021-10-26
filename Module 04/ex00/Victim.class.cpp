/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 21:50:31 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/05 09:07:34 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.class.hpp"

void			Victim::getPolymorphed(void) const
{
	std::cout << this->_Name << " has been turned into a cute little sheep!" << std::endl;
	return ;
}

std::string		Victim::getName(void) const
{
	return this->_Name;
}

std::ostream&	operator<<(std::ostream& out, const Victim& obj)
{
	out << "I'm " << obj.getName() << " and I like otters!" << std::endl;
	return out;
}

Victim&		Victim::operator=(const Victim& srcs)
{
	std::cout << "Victim assignment operator called" << std::endl;
	this->_Name = srcs._Name;
	return *this;
}

Victim::Victim(const Victim& srcs)
{
	std::cout << "Some random victim called " << srcs._Name << " just appeared!" << std::endl;
	*this = srcs;
	return ;
}

Victim::Victim(const std::string& name) : _Name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_Name << " just died for no apparent reason!" << std::endl;
	return ;
}
