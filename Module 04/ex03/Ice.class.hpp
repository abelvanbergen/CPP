/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.class.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 09:06:34 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 12:02:39 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

#include "AMateria.class.hpp"

class Ice : public AMateria
{
	private:

	public:
		AMateria*	clone() const;
		void		use(ICharacter& target);
		Ice&		operator=(const Ice& srcs);
		Ice(const Ice& srcs);
		Ice();
		virtual ~Ice();
};

#endif
