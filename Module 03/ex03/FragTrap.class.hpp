/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/12 11:17:07 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/01 09:41:04 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

#include <iostream>
#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
	private:
		FragTrap(void);
	public:
		void		rangedAttack(const std::string& target);
		void		meleeAttack(const std::string& target);
		void		vaulthunter_dot_exe(const std::string& target);

		FragTrap& operator=(const FragTrap& srcs);
		FragTrap(const FragTrap& srcs);
		FragTrap(const std::string& name);
		~FragTrap(void);
};

#endif
