/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 09:26:52 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/08 14:14:59 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

#include <iostream>

class Enemy
{
	private:
		Enemy(void);
	protected:
		int			_HP;
		std::string	_Type;

	public:
		virtual void		takeDamage(int damage);
		int					getHP(void) const;
		const std::string	getType(void) const;

		Enemy&		operator=(const Enemy& srcs);
		Enemy(const Enemy& srcs);
		Enemy(int hp, const std::string& type);
		virtual ~Enemy(void);
};

#endif
