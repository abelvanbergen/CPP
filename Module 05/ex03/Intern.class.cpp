/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/29 08:58:32 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/29 13:30:09 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"

Form*		Intern::makeForm(const std::string formname, const std::string target)
{
	Form* ret = NULL;
	Form *choices[] = {
			new Presidentialpardonform(target),
			new Robotomyrequestform(target),
			new Shrubberycreationform(target)
			};
	const std::string	types[3] = { "Presidential pardon form", "Roboto my rquest form", "Shrubbery creation form" };
	for (int i = 0; i < 3; i++)
	{
		if (formname == types[i])
		{
			std::cout << "Intern creates " << formname << std::endl;
			ret = choices[i];
		}
		else
			delete choices[i];
	}
	if (ret == NULL)
		std::cout << "Form is unknown" << std::endl;
	return ret;
}

Intern&		Intern::operator=(const Intern& srcs)
{
	std::cout << "Intern assignment operatr called" << std::endl;
	(void)srcs;
	return *this;
}

Intern::Intern(const Intern& srcs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = srcs;
	return ;
}

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
	return ;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
	return ;
}
