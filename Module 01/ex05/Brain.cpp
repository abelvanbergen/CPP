/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 19:15:10 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/02/06 12:32:23 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

const Brain* Brain::identify() const
{
	return this;
}

Brain::Brain(void)
{
	std::cout << "Brain Constructor called" << std::endl;
	_iq = 130;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}
