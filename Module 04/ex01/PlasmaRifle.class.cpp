/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.class.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 12:49:14 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/08 14:04:37 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.class.hpp"

void			PlasmaRifle::Attack(void) const
{
	std::cout << " * piouuu piouuu piouuu *" << std::endl;
	return ;
}

PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle& srcs)
{
	std::cout << "PlasmaRifle assignment operator called" << std::endl;
	AWeapon::operator=(srcs);
	return *this;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &srcs) : AWeapon(srcs)
{
	std::cout << "PlasmaRifle copy constructor called" << std::endl;
	return ;
}

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 21, 5)
{
	std::cout << "PlasmaRifle constructor called" << std::endl;
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	std::cout << "PlasmaRifle deconstructor called" << std::endl;
	return ;
}
