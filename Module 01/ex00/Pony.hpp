/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 08:48:40 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/02/02 10:28:41 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
	private:
		std::string	_name;
		std::string	_heap_or_stack;

	public:
		void	run_pony(void);
		void	pony_makes_sound(void);
		void	display_pony_info(void);
		Pony(std::string name, std::string _heap_or_stack);
		~Pony(void);
};

#endif
