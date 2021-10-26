/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.class.hpp                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/23 10:19:31 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/29 10:01:52 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

# include "Form.class.hpp"

class Shrubberycreationform : public Form
{
	private:
		Shrubberycreationform(void);
	public:
		void						execute(const Bureaucrat& executor) const;

		Shrubberycreationform&		operator=(const Shrubberycreationform& srcs);
		Shrubberycreationform(const Shrubberycreationform& srcs);
		Shrubberycreationform(const std::string target);
		~Shrubberycreationform(void);

};

#endif
