/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 13:00:03 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/02/02 11:06:53 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	_type;

	public:
		Zombie* randomChump();
		Zombie* newZombie(std::string name);
		void	setZombieType(std::string type);
		ZombieEvent(void);
		~ZombieEvent(void);
};

#endif
