/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.class.hpp                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/23 11:03:08 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/29 10:03:38 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

# include "Form.class.hpp"

class Robotomyrequestform : public Form
{
	private:
		Robotomyrequestform(void);
	public:
		void						execute(const Bureaucrat& executor) const;

		Robotomyrequestform&		operator=(const Robotomyrequestform& srcs);
		Robotomyrequestform(const Robotomyrequestform& srcs);
		Robotomyrequestform(const std::string target);
		~Robotomyrequestform(void);

};

#endif
