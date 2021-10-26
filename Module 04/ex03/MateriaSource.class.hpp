/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.class.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 13:47:51 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 12:02:36 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		int				_place;
		AMateria*		_memory[4];
		void			deleteMateria();
	public:
		void			learnMateria(AMateria* obj);
		AMateria*		createMateria(const std::string& type);
		MateriaSource&	operator=(const MateriaSource& srcs);
		MateriaSource(const MateriaSource& srcs);
		MateriaSource();
		virtual~MateriaSource();
};

#endif
