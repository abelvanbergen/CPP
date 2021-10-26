/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.class.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 12:36:24 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/05 09:21:21 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_CLASS_HPP
# define PLASMARIFLE_CLASS_HPP

# include "AWeapon.class.hpp"

class PlasmaRifle : public AWeapon
{
	private:

	public:
		void		Attack(void) const;

		PlasmaRifle&		operator=(const PlasmaRifle& srcs);
		PlasmaRifle(const PlasmaRifle& srcs);
		PlasmaRifle(void);
		virtual ~PlasmaRifle(void);

};

#endif
