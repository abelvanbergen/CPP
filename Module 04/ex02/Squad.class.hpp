/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 15:41:40 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 11:51:11 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_CLASS_HPP
# define SQUAD_CLASS_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <iostream>

class Squad : public ISquad
{
	private:
		int	_N;
		ISpaceMarine**	_Array;
		void			destroySquad();
	public:
		int				getCount() const;
		int				push(ISpaceMarine* element);
		ISpaceMarine*	getUnit(int index) const;
		Squad&			operator=(const Squad& srcs);
		Squad(const Squad& srcs);
		Squad();
		virtual ~Squad();

};

#endif
