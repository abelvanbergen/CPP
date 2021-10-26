/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   makePrintableFormat.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/29 17:32:13 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/11 14:28:26 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalarconversion.hpp"

void	makePrintableFormatChar(char c)
{
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	makePrintableFormatFloat(float f)
{
	printChar(f);
	printInt(f);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	makePrintableFormatDouble(double d)
{
	printChar(d);
	printInt(d);
	printFloat(d);
	std::cout << "double: " << d << std::endl;
}

void	makePrintableFormatInt(int num)
{
	printChar(num);
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
}
