/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 13:02:00 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/01 09:47:08 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include <iostream>
#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap(void);

	public:
		void		rangedAttack(const std::string& target);
		void		meleeAttack(const std::string& target);
		void		challengeNewcomer(const std::string& target);

		ScavTrap&	operator=(const ScavTrap& srcs);
		ScavTrap(const ScavTrap& srcs);
		ScavTrap(const std::string name);
		~ScavTrap(void);
};

#endif
