/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 13:02:00 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/11 16:38:06 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include <iostream>

class ScavTrap
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

		ScavTrap(void);

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
		void		challengeNewcomer(const std::string& target);

		ScavTrap&	operator=(const ScavTrap& srcs);
		ScavTrap(const ScavTrap& srcs);
		ScavTrap(std::string name);
		~ScavTrap(void);
};

#endif
