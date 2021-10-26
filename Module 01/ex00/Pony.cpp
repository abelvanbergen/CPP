/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 08:51:11 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/02/02 10:43:40 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::run_pony(void)
{
	std::cout << _name << " is running..." << std::endl;
}

void	Pony::pony_makes_sound(void)
{
	std::cout << _name << ": IEHIEHEHhehe brrr" << std::endl;
}

void	Pony::display_pony_info(void)
{
	std::cout << "This is pony " << _name << std::endl;
	std::cout << "This pony is on the " << _heap_or_stack << std::endl;
}

Pony::Pony(std::string _name, std::string _heap_or_stack) : _name(_name), _heap_or_stack(_heap_or_stack)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Destructor called" << std::endl;
	std::cout << "Pony vanished on the meadow" << std::endl;
	return ;
}
