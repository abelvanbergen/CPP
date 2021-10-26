/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.class.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:10:14 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/17 14:54:42 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <string>
# include <exception>

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
		class GradeTooLowhException : public std::exception
		{
			const char*	what(void) const throw()
			{
				return ("This grade is too low");
			};
		};

		const std::string	getName(void) const;
		int					getGrade(void) const;

		void				increaseGrade(void);
		void				decreaseGrade(void);

		Bureaucrat&	operator=(const Bureaucrat& srcs);
		Bureaucrat(const Bureaucrat& srcs);
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat(void);
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& obj);

#endif
