/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 18:40:41 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/04/30 13:17:39 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

unsigned int AMateria::getXP(void) const
{
	return (this->_xp);
}

const std::string& AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}

AMateria&	AMateria::operator=(const AMateria& srcs)
{
	this->_xp = srcs._xp;
	return *this;
}

AMateria::AMateria(const AMateria& srcs)
{
	*this = srcs;
	return ;
}

AMateria::AMateria(const std::string& type) : _type(type), _xp(0)
{
	return ;
}

AMateria::~AMateria()
{
	return ;
}
