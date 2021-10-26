/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.class.hpp                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 13:18:53 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 11:51:00 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_CLASS_HPP
# define ASSAULTTERMINATOR_CLASS_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	private:

	public:
		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			battleAttack() const;
		void			meleeAttack() const;
		AssaultTerminator&	operator=(const AssaultTerminator& srcs);
		AssaultTerminator(const AssaultTerminator& srcs);
		AssaultTerminator();
		virtual ~AssaultTerminator();

};

#endif
