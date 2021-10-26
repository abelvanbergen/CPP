/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 16:09:50 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/05 08:52:06 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_HPP
# define SORCERER_CLASS_HPP

# include <iostream>
# include "Victim.class.hpp"

class Sorcerer
{
	private:
		std::string	_Name;
		std::string	_Title;

		Sorcerer(void);
	public:
		void		polymorph(const Victim& target) const;
		std::string	getName(void) const;
		std::string	getTitle(void) const;

		Sorcerer&	operator=(const Sorcerer& srcs);
		Sorcerer(const Sorcerer& srcs);
		Sorcerer(const std::string& name, const std::string& title);
		virtual ~Sorcerer(void);
};

std::ostream& operator<<(std::ostream& out, const Sorcerer& obj);

#endif
