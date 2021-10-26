/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.class.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 10:38:10 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 12:02:22 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_CLASS_HPP
# define Cure_CLASS_HPP

#include "AMateria.class.hpp"

class Cure : public AMateria
{
	private:

	public:
		AMateria*	clone() const;
		void		use(ICharacter& target);
		Cure&		operator=(const Cure& srcs);
		Cure(const Cure& srcs);
		Cure();
		virtual ~Cure();
};

#endif
