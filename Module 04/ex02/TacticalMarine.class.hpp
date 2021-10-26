/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.class.hpp                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 13:21:18 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 11:51:16 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_CLASS_HPP
# define TACTICALMARINE_CLASS_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine
{
	private:

	public:
		ISpaceMarine*	clone()  const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			battleAttack() const;
		void			meleeAttack() const;
		TacticalMarine&	operator=(const TacticalMarine& srcs);
		TacticalMarine(const TacticalMarine& srcs);
		TacticalMarine();
		virtual ~TacticalMarine();

};

#endif
