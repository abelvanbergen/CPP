/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:09:28 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/29 13:35:05 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Intern.class.hpp"
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

int main(void)
{
	srand (time(NULL));
	try
	{
		Intern		Mark;
		Bureaucrat	B("Abel", 1);
		Form		*f1 = Mark.makeForm("Shrubbery creation form", "Home");

		std::cout << *f1 << std::endl;
		B.signform(*f1);
		std::cout << *f1 << std::endl;
		B.executeForm(*f1);
		delete f1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl << std::endl;
	try
	{
		Intern 		Remco;
		Bureaucrat	B("Abel", 6);
		Form		*f1 = Remco.makeForm("Presidential pardon form", "white house");
		Form		*f2 = Remco.makeForm("doesnexist", "Uranus");
		f2 = Remco.makeForm("Roboto my rquest form", "Wall-E");

		std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl;
		B.signform(*f1);
		B.executeForm(*f1);
		B.increaseGrade();
		B.executeForm(*f1);
		std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl;
		B.signform(*f2);
		B.executeForm(*f2);
		B.executeForm(*f2);
		B.executeForm(*f2);
		B.executeForm(*f2);
		B.executeForm(*f2);
		B.executeForm(*f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
