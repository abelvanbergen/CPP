/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 21:43:40 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/03 16:48:54 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_HPP
# define VICTIM_CLASS_HPP

# include <iostream>

class Victim
{
	private:
		Victim(void);
	protected:
		std::string _Name;
	public:
		virtual void		getPolymorphed(void) const;
		std::string	getName(void) const;

		Victim&	operator=(const Victim& srcs);
		Victim(const Victim& srcs);
		Victim(const std::string& name);
		virtual ~Victim(void);
};

std::ostream&	operator<<(std::ostream& out, const Victim& obj);

#endif
