/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/22 12:02:35 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/01 17:28:33 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_CLASS_HPP
# define SUPERTRAP_CLASS_HPP

# include <string>
# include "FragTrap.class.hpp"
# include "NinjaTrap.class.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:
		SuperTrap(void);

	public:
		void		rangedAttack(const std::string& target);
		void		meleeAttack(const std::string& target);

		SuperTrap& operator=(const SuperTrap& srcs);
		SuperTrap(const SuperTrap& srcs);
		SuperTrap(const std::string& name);
		~SuperTrap(void);
};

#endif
