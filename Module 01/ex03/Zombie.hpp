/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 13:01:36 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/14 18:16:40 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	_name;
		std::string _type;

	public:
		void	announce();

		void	setType(std::string type);
		void	setName(std::string name);

		std::string	getType();
		std::string	getName();

		Zombie(void);
		~Zombie(void);
};

#endif
