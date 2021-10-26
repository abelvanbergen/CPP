/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 19:08:50 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/02/06 12:36:56 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human
{
	private:
		const Brain	_brain;

	public:
	const Brain*	identify();

	const Brain& getBrain() const;

	Human(void);
	~Human(void);
};

#endif
