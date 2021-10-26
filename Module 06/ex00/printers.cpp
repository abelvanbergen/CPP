/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printers.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/29 17:37:23 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/11 14:30:24 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalarconversion.hpp"

void	printInt(const long nb)
{
	if (nb != int(nb))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << nb << std::endl;
}

void	printChar(const long nb)
{
	if (nb > 127)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(nb))
		std::cout << "char: " << (char)nb << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	printFloat(double num)
{
	if (num < -FLT_MAX || num > FLT_MAX)
		std::cout << "char: impossible" << std::endl;
	std::cout << "float: " << (float)num << "f"  << std::endl;
}
