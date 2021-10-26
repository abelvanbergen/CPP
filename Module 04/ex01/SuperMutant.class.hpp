/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.class.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 13:34:02 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/08 14:16:06 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_CLASS_HPP
# define SUPERMUTANT_CLASS_HPP

# include "Enemy.class.hpp"

class SuperMutant : public Enemy
{
	private:

	public:
		void			takeDamage(int damage);

		SuperMutant&	operator=(const SuperMutant& srcs);
		SuperMutant(const SuperMutant& srcs);
		SuperMutant(void);
		virtual ~SuperMutant(void);
};

#endif
