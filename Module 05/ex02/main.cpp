/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:09:28 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/29 13:44:31 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

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
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat				Abel("Abel", 30);
		Shrubberycreationform	f("Home");
		Presidentialpardonform	f1("White house");
		Robotomyrequestform		f2("Grid");

		std::cout << f << std::endl;
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl;
		Abel.signform(f);
		Abel.signform(f1);
		Abel.signform(f2);
		std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl;
		std::cout << f << std::endl;
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl;
		Abel.executeForm(f);
		std::cout << "-=+=-" << std::endl;
		Abel.executeForm(f1);
		std::cout << "-=+=-" << std::endl;
		Abel.executeForm(f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
