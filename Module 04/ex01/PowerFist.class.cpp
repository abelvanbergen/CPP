/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 09:14:44 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/08 14:04:26 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.class.hpp"

void			PowerFist::Attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}

PowerFist&	PowerFist::operator=(const PowerFist& srcs)
{
	std::cout << "PowerFist assignment operator called" << std::endl;
	AWeapon::operator=(srcs);
	return *this;
}

PowerFist::PowerFist(const PowerFist &srcs) : AWeapon(srcs)
{
	std::cout << "PowerFist copy constructor called" << std::endl;
	return ;
}

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8)
{
	std::cout << "PowerFist constructor called" << std::endl;
	return ;
}

PowerFist::~PowerFist(void)
{
	std::cout << "PowerFist deconstructor called" << std::endl;
	return ;
}
