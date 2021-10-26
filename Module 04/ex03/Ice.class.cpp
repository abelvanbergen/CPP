/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.class.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 09:11:29 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/04/30 13:23:42 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

AMateria*	Ice::clone() const
{
	AMateria* new_obj = new Ice(*this);
	return new_obj;
}

void	Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at NAME *" << target.getName() << " *" << std::endl;
}

Ice&	Ice::operator=(const Ice& srcs)
{
	AMateria::operator=(srcs);
	return *this;
}

Ice::Ice(const Ice& srcs) : AMateria("ice")
{
	*this = srcs;
	return ;
}

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::~Ice(void)
{
	return ;
}
