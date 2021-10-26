/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 15:04:58 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/06 14:00:15 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string	_Type;
		int			_Hp;
		int			_Max_Hp;
		int			_Ep;
		int			_Max_Ep;
		int			_Level;
		std::string	_Name;
		int			_MeleeAttackDamage;
		int			_RangedAttackDamage;
		int			_ArmorDamageReduction;

		ClapTrap(const std::string& name, const std::string& type);
		ClapTrap(void);

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

		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		ClapTrap& operator=(const ClapTrap& srcs);
		ClapTrap(const ClapTrap& srcs);
		ClapTrap(const std::string& name);
		~ClapTrap(void);
};

#endif
