/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.class.cpp                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 13:53:10 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/04/30 15:05:50 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.class.hpp"

ISpaceMarine*	AssaultTerminator::clone(void) const
{
	return new AssaultTerminator(*this);
}

void			AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void	AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return ;
}

AssaultTerminator&	AssaultTerminator::operator=(const AssaultTerminator& srcs)
{
	(void)srcs;
	return *this;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& srcs)
{
	std::cout << "* teleports from space *" << std::endl;
	*this = srcs;
	return ;
}

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back..." << std::endl;
	return ;
}
