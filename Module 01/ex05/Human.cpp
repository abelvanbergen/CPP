/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 19:11:18 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/02/16 15:19:29 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain*	Human::identify()
{
	return this->_brain.identify();
}

const	Brain&	Human::getBrain() const 
{
	return this->_brain;
}

Human::Human(void)
{
	std::cout << "Human Constructor called" << std::endl;
	return ;
}

Human::~Human(void)
{
	std::cout << "Human Destructor called" << std::endl;
	return ;
}
