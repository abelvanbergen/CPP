/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.class.cpp                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 13:25:18 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/04/30 15:06:06 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.class.hpp"

ISpaceMarine*	TacticalMarine::clone(void) const
{
	ISpaceMarine* element = new TacticalMarine();
	return element;
}

void			TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return ;
}

void	TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return ;
}

void	TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
	return ;
}

TacticalMarine&	TacticalMarine::operator=(const TacticalMarine& srcs)
{
	(void)srcs;
	return *this;
}

TacticalMarine::TacticalMarine(const TacticalMarine& srcs)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = srcs;
	return ;
}

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}
