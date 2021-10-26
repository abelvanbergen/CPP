/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.class.cpp                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/23 10:33:10 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/29 10:04:06 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.class.hpp"
#include <iostream>
#include <fstream>

void					Presidentialpardonform::execute(const Bureaucrat& executor) const
{
	this->checkIsSigned();
	this->checkGrade(executor);
	std::cout << this->getTarget() << " has been  pardoned by Zafod Beeblebrox" << std::endl;
}

Presidentialpardonform&	Presidentialpardonform::operator=(const Presidentialpardonform& srcs)
{
	Form::operator=(srcs);
	std::cout << "Presidentialpardonform constructor called" << std::endl;
	return *this;
}

Presidentialpardonform::Presidentialpardonform(const Presidentialpardonform& srcs) : Form(srcs)
{
	std::cout << "Presidentialpardonform copy constructor called" << std::endl;
	return ;
}

Presidentialpardonform::Presidentialpardonform(const std::string target) : Form("Presidentialpardonform", target, 25, 5)
{
	std::cout << "Presidentialpardonform constructor called" << std::endl;
	return ;
}

Presidentialpardonform::~Presidentialpardonform(void)
{
	std::cout << "Presidentialpardonform destructor called" << std::endl;
	return ;
}
