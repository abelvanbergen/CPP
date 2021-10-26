/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.class.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 14:29:32 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/08 14:30:21 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_CLASS_HPP
# define RADSCORPION_CLASS_HPP

# include "Enemy.class.hpp"

class RadScorpion : public Enemy
{
	private:

	public:
		RadScorpion&	operator=(const RadScorpion& srcs);
		RadScorpion(const RadScorpion& srcs);
		RadScorpion(void);
		virtual ~RadScorpion(void);
};

#endif
