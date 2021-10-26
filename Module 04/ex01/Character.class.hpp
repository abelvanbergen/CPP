/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 15:45:04 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 09:21:06 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

#include "AWeapon.class.hpp"
#include "Enemy.class.hpp"

class Character
{
	private:
		std::string		_Name;
		int				_AP;
		AWeapon*		_Weapon;
		Character(void);

	public:
		void			recoverAP(void);
		void			equip(AWeapon* weapon);
		void			attack(Enemy* Enemy);
		std::string		getName(void) const;
		int				getAP(void) const;
		AWeapon*		getWeapon(void) const;

		Character&		operator=(const Character& srcs);
		Character(const Character& srcs);
		Character(const std::string& name);
		virtual ~Character(void);
};

std::ostream&	operator<<(std::ostream& out, const Character& obj);

#endif
