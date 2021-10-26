/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FishingRod.class.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 09:19:31 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/08 14:04:45 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FishingRod.class.hpp"

void			FishingRod::Attack(void) const
{
	std::cout << "* splash!! .... plop *" << std::endl;
	return ;
}

FishingRod&	FishingRod::operator=(const FishingRod& srcs)
{
	std::cout << "FishingRod assignment operator called" << std::endl;
	AWeapon::operator=(srcs);
	return *this;
}

FishingRod::FishingRod(const FishingRod &srcs) : AWeapon(srcs)
{
	std::cout << "FishingRod copy constructor called" << std::endl;
	return ;
}

FishingRod::FishingRod(void) : AWeapon("Power Fist", 50, 8)
{
	std::cout << "FishingRod constructor called" << std::endl;
	return ;
}

FishingRod::~FishingRod(void)
{
	std::cout << "FishingRod deconstructor called" << std::endl;
	return ;
}
