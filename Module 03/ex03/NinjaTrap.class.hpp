/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/17 15:25:15 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/06 14:03:33 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_CLASS_HPP
# define NINJATRAP_CLASS_HPP

# include <string>
# include "ClapTrap.class.hpp"
# include "FragTrap.class.hpp"
# include "ScavTrap.class.hpp"

class NinjaTrap : public ClapTrap
{
	private:
		NinjaTrap(void);

	public:
		void	rangedAttack(const std::string& target);
		void	meleeAttack(const std::string& target);
		void	ninjaShoebox(const FragTrap& target);
		void	ninjaShoebox(const ScavTrap& target);
		void	ninjaShoebox(const NinjaTrap& target);
		void	ninjaShoebox(const ClapTrap& target);

		NinjaTrap& operator=(const NinjaTrap& srcs);
		NinjaTrap(const NinjaTrap& srcs);
		NinjaTrap(const std::string& name);
		~NinjaTrap(void);
};

#endif
