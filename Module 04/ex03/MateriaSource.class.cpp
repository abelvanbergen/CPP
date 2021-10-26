/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.class.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 13:47:58 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/04/30 14:57:24 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

void		MateriaSource::deleteMateria(void)
{
	for(int i = 0; i < this->_place; i++)
		delete this->_memory[i];
}

void			MateriaSource::learnMateria(AMateria* obj)
{
	if (this->_place < 4)
	{
		this->_memory[this->_place] = obj;
		this->_place += 1;
	}
}

AMateria*		MateriaSource::createMateria(const std::string& type)
{
	for(int i = 0; i < this->_place; i++)
		if (type == this->_memory[i]->getType())
			return (this->_memory[i]->clone());
	return (0);
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& srcs)
{
	if (this->_place > 0)
		this->deleteMateria();
	for(int i = 0; i < srcs._place; i++)
		this->_memory[i] = srcs._memory[i]->clone();
	return *this;
}

MateriaSource::MateriaSource(const MateriaSource& srcs)
{
	this->_place = 0;
	*this = srcs;
	return ;
}

MateriaSource::MateriaSource(void) : _place(0)
{
	for(int i = 0; i < 4; i++)
		this->_memory[i]  = 0;
	return ;
}

MateriaSource::~MateriaSource()
{
	this->deleteMateria();
	return ;
}
