/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checkers.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/29 17:24:28 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/11 12:32:01 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalarconversion.hpp"

int isFloatPseudoLiterals(const std::string str)
{
	std::string		pl[] = {"-inff", "+inff", "nanf"};
	for(int i = 0; i < 3; i++)
	{
		if (str == pl[i])
			return(1);
	}
	return (0);
}

int isDoublePseudoLiterals(const std::string str)
{
	std::string		pl[] = {"-inf", "+inf", "nan"};
	for(int i = 0; i < 3; i++)
	{
		if (str == pl[i])
			return(1);
	}
	return (0);
}

int	countChar(std::string input, char c)
{
	int count = 0;
	for(unsigned int i = 0; i < input.size(); i++)
		if (input[i] == c)
			count++;
	return (count);
}

int	isValidInt(const std::string str)
{
	std::stringstream ss;

	int sign = 0;
	if (str[0] == '-')
		sign++;
	for(int i = sign; str[i] != '\0'; i++)
		if (str[i] < '0' || str[i] > '9')
			return (0);
	int len = str.size();
	if (str[0] == '-')
		len--;
	if (len > 10)
		return (0);
	ss << str;
	long placeholder;
	ss >> placeholder;
	if (placeholder > INT32_MAX || placeholder < INT32_MIN)
		 return (0);
	return (1);
}

int	isValidFloat(std::string input)
{
	if (isFloatPseudoLiterals(input) == 1)
		return (1);
	if (input[input.size() - 1] != 'f')
		return (0);
	if (countChar(input, '.') != 1)
		return (0);
	unsigned int i = 0;
	if (input[0] == '-')
		i++;
	for (;i < input.size() - 2; i++)
		if (!((input[i] >= '0' && input[i] <= '9') || input[i] == '.'))
			return (0);
	return (1);
}

int	isValidDouble(std::string input)
{
	if (isDoublePseudoLiterals(input) == 1)
		return (1);
	if (countChar(input, '.') != 1)
		return (0);
	unsigned int i = 0;
	if (input[0] == '-')
		i++;
	for (;i < input.size() - 1; i++)
		if (!((input[i] >= '0' && input[i] <= '9') || input[i] == '.'))
			return (0);
	return (1);
}
