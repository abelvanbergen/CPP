/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Loser.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 10:07:25 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/05 08:53:54 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOSER_CLASS_HPP
# define LOSER_CLASS_HPP

# include <iostream>
# include "Victim.class.hpp"

class Loser : public Victim
{
	private:
		Loser(void);
	public:
		void		getPolymorphed(void) const;

		Loser&		operator=(const Loser& srcs);
		Loser(const Loser& srcs);
		Loser(const std::string& name);
		virtual ~Loser(void);
};

std::ostream&	operator<<(std::ostream& out, const Loser& obj);

#endif
