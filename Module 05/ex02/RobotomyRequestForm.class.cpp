/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.class.cpp                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/23 11:06:30 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/29 10:04:02 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.class.hpp"

void					Robotomyrequestform::execute(const Bureaucrat& executor) const
{
	this->checkIsSigned();
	this->checkGrade(executor);
	std::cout << "DRRRrrr ... DRrrr.." << std::endl;
	srand (time(NULL));
	int index = rand() % 2;
	if (index == 1)
		std::cout << this->getTarget() << " has been robotomized succesfully" << std::endl;
	else
		std::cout << this->getTarget() << " has been a failure" << std::endl;
}

Robotomyrequestform&	Robotomyrequestform::operator=(const Robotomyrequestform& srcs)
{
	Form::operator=(srcs);
	std::cout << "Robotomyrequestform constructor called" << std::endl;
	return *this;
}

Robotomyrequestform::Robotomyrequestform(const Robotomyrequestform& srcs) : Form(srcs)
{
	std::cout << "Robotomyrequestform copy constructor called" << std::endl;
	return ;
}

Robotomyrequestform::Robotomyrequestform(const std::string target) : Form("Robotomyrequestform", target, 72, 45)
{
	std::cout << "Robotomyrequestform constructor called" << std::endl;
	return ;
}

Robotomyrequestform::~Robotomyrequestform(void)
{
	std::cout << "Robotomyrequestform destructor called" << std::endl;
	return ;
}
