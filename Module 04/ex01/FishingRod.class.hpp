/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FishingRod.class.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 09:17:52 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/08 10:48:18 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FISHINGROD_CLASS_HPP
# define FISHINGROD_CLASS_HPP

# include "AWeapon.class.hpp"

class FishingRod : public AWeapon
{
	private:

	public:
		void		Attack(void) const;

		FishingRod&		operator=(const FishingRod& srcs);
		FishingRod(const FishingRod& srcs);
		FishingRod(void);
		virtual ~FishingRod(void);

};

#endif
