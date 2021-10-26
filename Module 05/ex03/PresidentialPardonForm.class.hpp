/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.class.hpp                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/22 15:59:08 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/29 10:04:41 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

# include "Form.class.hpp"

class Presidentialpardonform : public Form
{
	private:
		Presidentialpardonform(void);
	public:
		void						execute(const Bureaucrat& executor) const;

		Presidentialpardonform&		operator=(const Presidentialpardonform& srcs);
		Presidentialpardonform(const Presidentialpardonform& srcs);
		Presidentialpardonform(const std::string target);
		~Presidentialpardonform(void);

};

#endif
