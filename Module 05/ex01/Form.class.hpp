/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.class.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 09:03:02 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/29 14:54:40 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <iostream>
# include <exception>

class Bureaucrat;

class Form
{
	private:
		const std::string	_Name;
		bool				_IsSigned;
		const int			_GradeRequiredSign;
		const int			_GradeRequiredExecute;
		Form(void);
	public:
		class GradeTooHighException : public std::exception
		{
			const char*	what(void) const throw()
			{
				return ("the grade required is too high");
			};
		};
		class GradeTooLowException : public std::exception
		{
			const char*	what(void) const throw()
			{
				return ("the grade required is too low");
			};
		};

		const std::string&	getName(void) const;
		bool				getIsSigned(void) const;
		int					getGradeRequiredSign(void) const;
		int					getGradeRequiredExecute(void) const;

		void				beSigned(const Bureaucrat& signer);

		Form&	operator=(const Form& srcs);
		Form(const Form& srcs);
		Form(const std::string name, const int graderequiredsign, const int graderequiredexecute);
		~Form(void);
};

std::ostream&	operator<<(std::ostream& out, const Form& obj);

#endif
