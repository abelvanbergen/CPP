/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.class.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 14:29:29 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/08 14:31:42 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.class.hpp"

RadScorpion&	RadScorpion::operator=(const RadScorpion& srcs)
{
	std::cout << "RadScorpion assignment operator called" << std::endl;
	Enemy::operator=(srcs);
	return *this;
}

RadScorpion::RadScorpion(const RadScorpion& srcs) : Enemy(srcs)
{
	std::cout << "RadScorpion copy constructor called" << std::endl;
	return ;
}

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}
