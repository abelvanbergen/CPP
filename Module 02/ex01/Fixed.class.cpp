/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 15:12:02 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/02/12 11:03:36 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>
#include <string>

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(const int raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	_fixedPointValue = raw;
	return ;
}
float Fixed::toFloat(void) const
{
	return(float(_fixedPointValue) / (float)(1 << _fractional_bits));
}

Fixed::Fixed(const float float_nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(pow(2, _fractional_bits) * float_nbr);
	return ;
}

int	Fixed::toInt(void) const
{
	return(this->_fixedPointValue >> _fractional_bits);
}

Fixed::Fixed(const int int_nbr)
{
	_fixedPointValue = int_nbr << _fractional_bits;
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed&	Fixed::operator=(const Fixed &srcs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_fixedPointValue = srcs.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return out;
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
