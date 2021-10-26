/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.class.cpp                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/23 10:33:10 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/29 12:04:49 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"
#include <iostream>
#include <fstream>

void					Shrubberycreationform::execute(const Bureaucrat& executor) const
{
	this->checkIsSigned();
	this->checkGrade(executor);
	std::ofstream file(this->getTarget() + "_shrubbery");
	file << "ASCII trees" << std::endl;
	file.close();
}

Shrubberycreationform&	Shrubberycreationform::operator=(const Shrubberycreationform& srcs)
{
	Form::operator=(srcs);
	// std::cout << "Shrubberycreationform constructor called" << std::endl;
	return *this;
}

Shrubberycreationform::Shrubberycreationform(const Shrubberycreationform& srcs) : Form(srcs)
{
	// std::cout << "Shrubberycreationform copy constructor called" << std::endl;
	return ;
}

Shrubberycreationform::Shrubberycreationform(const std::string target) : Form("Shrubberycreationform", target, 145, 137)
{
	// std::cout << "Shrubberycreationform constructor called" << std::endl;
	return ;
}

Shrubberycreationform::~Shrubberycreationform(void)
{
	// std::cout << "Shrubberycreationform destructor called" << std::endl;
	return ;
}
