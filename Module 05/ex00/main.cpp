/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:09:28 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/29 14:23:35 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# include "Bureaucrat.class.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	Abel("Abel", 5);
		Abel.increaseGrade();
		Bureaucrat	Ingmar("ingmar", 1);

		std::cout << Abel << Ingmar << std::endl;
		Ingmar.decreaseGrade();
		std::cout << Abel << Ingmar << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat	Abel("Abel", -10);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat	Abel("Abel", 150);
		std::cout << Abel << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}
