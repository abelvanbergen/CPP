/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.class.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 09:17:35 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/29 13:40:33 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

void			Form::beSigned(const Bureaucrat& signer)
{
	if (signer.getGrade() <= this->_GradeRequiredSign)
		this->_IsSigned = true;
	else
		throw GradeTooLowException();
}

void			Form::checkGrade(const Bureaucrat& executor) const
{
	if (this->_GradeRequiredExecute < executor.getGrade())
		throw ExecuteGradeToHigh();
}

void			Form::checkIsSigned(void) const
{
	if (this->_IsSigned == false)
		throw IsNotSigned();
}

const std::string&	Form::getName(void) const
{
	return this->_Name;
}

const std::string&	Form::getTarget(void) const
{
	return this->_Target;
}

bool			Form::getIsSigned(void) const
{
	return this->_IsSigned;
}

int		Form::getGradeRequiredSign(void) const
{
	return this->_GradeRequiredSign;
}

int				Form::getGradeRequiredExecute(void) const
{
	return this->_GradeRequiredExecute;
}

Form&			Form::operator=(const Form& srcs)
{

	std::cout << "Form assignment operator called" << std::endl;
	this->_IsSigned = srcs._IsSigned;
	return *this;
}

Form::Form(const Form& srcs) : _Name(srcs._Name), _Target(srcs._Target), _GradeRequiredSign(srcs._GradeRequiredSign), _GradeRequiredExecute(srcs._GradeRequiredExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = srcs;
	return ;
}

Form::Form(const std::string name, const std::string target, const int graderequiredsign, const int graderequiredexecute) : _Name(name), _Target(target), _IsSigned(false), _GradeRequiredSign(graderequiredsign), _GradeRequiredExecute(graderequiredexecute)
{
	std::cout << "Form constructor called" << std::endl;
	if (this->_GradeRequiredSign < 1)
		throw GradeTooHighException();
	else if (this->_GradeRequiredSign > 150)
		throw GradeTooLowException();
	if (this->_GradeRequiredExecute < 1)
		throw GradeTooHighException();
	else if (this->_GradeRequiredExecute > 150)
		throw GradeTooLowException();
	return ;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
	return ;
}

std::ostream&	operator<<(std::ostream& out, const Form& obj)
{
	out << obj.getName() << " with target " << obj.getTarget() <<" is ";
	if (obj.getIsSigned() == false)
		out << "not signed.";
	else
		out << "signed.";
	out << " The grade required to sign is " << obj.getGradeRequiredSign() << " and the grade required to execute is " << obj.getGradeRequiredExecute();
	return out;
}
