/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalarconversion.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/29 16:27:02 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/11 14:36:22 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalarconversion.hpp"

int main(int ac, char **av)
{
	std::stringstream ss;
	if (ac == 2)
	{
		std::string input = static_cast<std::string>(av[1]);
		if (input.size() == 1)
		{
			char c;
			ss << input;
			ss >> c;
			makePrintableFormatChar(c);
		}
		else if (isValidFloat(input) == 1)
		{
			float f;
			input.pop_back();
			ss << input;
			ss >> f;
			makePrintableFormatFloat(f);
		}
		else if (isValidDouble(input) == 1)
		{
			double d;
			ss << input;
			ss >> d;
			makePrintableFormatDouble(d);
		}
		else if (isValidInt(input) == 1)
		{
			int nb;
			ss << input;
			ss >> nb;
			makePrintableFormatInt(nb);
		}
		else
			std::cout << "The conversion is impossible" << std::endl;
	}
}
