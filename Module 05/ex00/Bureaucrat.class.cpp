/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.class.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:10:16 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/17 14:56:24 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.class.hpp"

void				Bureaucrat::increaseGrade(void)
{
	this->_Grade -= 1;
	if (this->_Grade < 1)
		throw GradeTooHighException();
}

void				Bureaucrat::decreaseGrade(void)
{
	this->_Grade += 1;
	if (this->_Grade > 150)
		throw GradeTooLowhException();
}

const std::string	Bureaucrat::getName(void) const
{
	return this->_Name;
}

int					Bureaucrat::getGrade(void) const
{
	return this->_Grade;
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat& srcs)
{
	std::cout << "Bureaucrat assignmet operator called" << std::endl;
	this->_Grade= srcs._Grade;
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& srcs)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = srcs;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _Name(name), _Grade(grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (this->_Grade < 1)
		throw GradeTooHighException();
	else if (this->_Grade > 150)
		throw GradeTooLowhException();
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return out;
}
