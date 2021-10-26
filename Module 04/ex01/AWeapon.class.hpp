/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 11:27:36 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/08 10:04:00 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_CLASS_HPP
# define AWEAPON_CLASS_HPP

#include <iostream>

class AWeapon
{
	private:
		AWeapon(void);

	protected:
		std::string	_Name;
		int			_DamagePoints;
		int			_ActionPoints;

	public:
		virtual void	Attack(void) const = 0;
		std::string		getName(void) const;
		int				getAPCost(void) const;
		int				getDamage(void) const;

		AWeapon&		operator=(const AWeapon& srcs);
		AWeapon(const AWeapon& srcs);
		AWeapon(const std::string& name, const int damagepoints, const int actionpoints);
		virtual ~AWeapon(void);
};

#endif
