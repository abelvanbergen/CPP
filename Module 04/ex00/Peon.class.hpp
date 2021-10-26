/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.class.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 16:06:52 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/05 08:51:57 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_HPP
# define PEON_CLASS_HPP

# include <iostream>
# include "Victim.class.hpp"

class Peon : public Victim
{
	private:
		Peon(void);
	public:
		void		getPolymorphed(void) const;

		Peon&	operator=(const Peon& srcs);
		Peon(const Peon& srcs);
		Peon(const std::string& name);
		virtual ~Peon(void);
};

std::ostream& operator<<(std::ostream& out, const Peon& obj);

#endif
