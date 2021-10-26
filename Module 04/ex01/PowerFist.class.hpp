/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 09:15:06 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 09:21:27 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_CLASS_HPP
# define POWERFIST_CLASS_HPP

# include "AWeapon.class.hpp"

class PowerFist : public AWeapon
{
	private:

	public:
		void			Attack(void) const;

		PowerFist&		operator=(const PowerFist& srcs);
		PowerFist(const PowerFist& srcs);
		PowerFist(void);
		virtual ~PowerFist(void);

};

#endif
