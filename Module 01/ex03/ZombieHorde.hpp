/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 13:01:36 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/14 17:57:17 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
	private:
		int		_n;
		Zombie	*_horde;

	public:
		void	announce(void);
		ZombieHorde(int N);
		~ZombieHorde(void);
};

#endif
