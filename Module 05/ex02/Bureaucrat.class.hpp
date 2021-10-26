/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.class.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:10:14 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/26 10:50:42 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <exception>

class Form;

class Bureaucrat
{
	private:
		const std::string	_Name;
		int					_Grade;
		Bureaucrat(void);
	public:
		class GradeTooHighException : public std::exception
		{
			const char*	what(void) const throw()
			{
				return ("This grade is too high");
			};
		};
		class GradeTooLowException : public std::exception
		{
			const char*	what(void) const throw()
			{
				return ("This grade is too low");
			};
		};

		void				signform(Form& form);
		void				executeForm(const Form& form) const;
		void				increaseGrade(void);
		void				decreaseGrade(void);

		const std::string	getName(void) const;
		int					getGrade(void) const;

		Bureaucrat&	operator=(const Bureaucrat& srcs);
		Bureaucrat(const Bureaucrat& srcs);
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat(void);
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& obj);

#endif
