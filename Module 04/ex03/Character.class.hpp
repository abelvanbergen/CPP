/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 10:49:53 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 12:02:16 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		const std::string	_name;
		AMateria*			_inventory[4];
		int					_place;
		void		deleteMateria();
		Character();
	public:
		const std::string&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void 				use(int idx, ICharacter& target);
		Character&	operator=(const Character& srcs);
		Character(const Character& srcs);
		Character(const std::string name);
		virtual ~Character();
};

#endif
