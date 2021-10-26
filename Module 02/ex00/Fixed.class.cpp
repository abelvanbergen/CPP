/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 13:35:11 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/02/12 11:03:24 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
	return ;
}

Fixed&	Fixed::operator=(const Fixed &srcs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_fixedPointValue = srcs.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed &srcs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = srcs;
}

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
