/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 18:14:44 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/04/30 13:32:20 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
	protected:
		const std::string	_type;
		unsigned int		_xp;
		AMateria();
	public:
		unsigned int getXP() const; //Returns the Materia's XP
		const std::string& getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		AMateria&	operator=(const AMateria& srcs);
		AMateria(const AMateria& srcs);
		AMateria(const std::string& type);
		virtual ~AMateria();
};

#endif
