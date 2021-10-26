/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/29 08:50:20 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/29 09:50:43 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

# include <iostream>
# include "Form.class.hpp"
# include "PresidentialPardonForm.class.hpp"
# include "RobotomyRequestForm.class.hpp"
# include "ShrubberyCreationForm.class.hpp"

class Intern
{
	private:

	public:
		Form*		makeForm(const std::string name, const std::string target);
		Intern&		operator=(const Intern& srcs);
		Intern(const Intern& srcs);
		Intern(void);
		~Intern(void);
};

#endif
