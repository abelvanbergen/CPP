/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/12 11:17:07 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/01 09:37:23 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

#include <iostream>

class FragTrap
{
	private:
		int			_Hp;
		int			_Max_Hp;
		int			_Ep;
		int			_Max_Ep;
		int			_Level;
		std::string	_Name;
		int			_MeleeAttackDamage;
		int			_RangedAttackDamage;
		int			_ArmorDamageReduction;

		FragTrap(void);

	public:
		void		printClass(void);

		int			getHp(void) const;
		int			getMaxHp(void) const;
		int			getEp(void) const;
		int			getMaxEp(void) const;
		int			getLevel(void) const;
		std::string	getName(void) const;
		int			getMeleeAttackDamage(void) const;
		int			getRangedAttackDamage(void) const;
		int			getArmorDamageReduction(void) const;

		void		rangedAttack(const std::string& target);
		void		meleeAttack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(const std::string& target);

		FragTrap& operator=(const FragTrap &srcs);
		FragTrap(const FragTrap& srcs);
		FragTrap(std::string name);
		~FragTrap(void);
};

#endif
