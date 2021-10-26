/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Lars.class.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 15:29:24 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/03/08 15:29:57 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LARS_CLASS_HPP
# define LARS_CLASS_HPP

# include "Enemy.class.hpp"

class Lars : public Enemy
{
	private:

	public:
		Lars&	operator=(const Lars& srcs);
		Lars(const Lars& srcs);
		Lars(void);
		virtual ~Lars(void);
};

#endif
