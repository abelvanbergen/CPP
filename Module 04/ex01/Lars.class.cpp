/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Lars.class.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 15:28:29 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/08 15:30:17 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Lars.class.hpp"

Lars&	Lars::operator=(const Lars& srcs)
{
	std::cout << "Lars assignment operator called" << std::endl;
	Enemy::operator=(srcs);
	return *this;
}

Lars::Lars(const Lars& srcs) : Enemy(srcs)
{
	std::cout << "Lars copy constructor called" << std::endl;
	return ;
}

Lars::Lars(void) : Enemy(80, "Lars")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

Lars::~Lars(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}
