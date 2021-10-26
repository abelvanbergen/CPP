/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalarconversion.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/29 17:25:09 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/12 10:54:20 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef Scalarconversion_HPP
# define Scalarconversion_HPP

# include <iostream>
# include <sstream>
# include <float.h>

void	printChar(const long nb);
void	printInt(const long nb);
void	printFloat(double);

void	makePrintableFormatChar(char c);
void	makePrintableFormatFloat(float f);
void	makePrintableFormatDouble(double d);
void	makePrintableFormatInt(int num);

int		isFloatPseudoLiterals(const std::string str);
int		isDoublePseudoLiterals(const std::string str);
int		countChar(std::string input, char c);
int		isValidInt(const std::string str);
int		isValidFloat(std::string input);
int		isValidDouble(std::string input);

#endif
