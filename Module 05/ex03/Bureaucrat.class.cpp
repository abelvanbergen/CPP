/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.class.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:10:16 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/29 13:26:59 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

void				Bureaucrat::signform(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_Name <<  " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_Name <<  " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void				Bureaucrat::executeForm(const Form& form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_Name << " executes " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}

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
		throw GradeTooLowException();
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
		throw GradeTooLowException();
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
