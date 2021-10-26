/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.class.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 10:42:20 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/04/30 13:21:21 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

AMateria*	Cure::clone() const
{
	AMateria* new_obj = new Cure(*this);
	return new_obj;
}

void	Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure&	Cure::operator=(const Cure& srcs)
{
	AMateria::operator=(srcs);
	return *this;
}

Cure::Cure(const Cure& srcs) : AMateria("cure")
{
	*this = srcs;
	return ;
}

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::~Cure(void)
{
	return ;
}
