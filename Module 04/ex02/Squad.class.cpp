/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 11:03:14 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/04/29 17:48:26 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.class.hpp"

void		Squad::destroySquad()
{
	for(int i = 0; i < this->_N; i++)
		delete this->_Array[i];
	delete[] this->_Array;
}

int				Squad::getCount(void) const
{
	return this->_N;
}

int				Squad::push(ISpaceMarine* element)
{
	if (element == NULL)
		return (this->_N);
	for(int i = 0; i < this->_N; i++)
		if (element == this->_Array[i])
			return (this->_N);
	ISpaceMarine**	newArray = new ISpaceMarine*[this->_N + 1];
	for(int i = 0; i < this->_N; i++)
		newArray[i] = this->_Array[i];
	newArray[this->_N] = element;
	delete[] this->_Array;
	this->_N += 1;
	this->_Array = newArray;
	return (this->_N);
}

ISpaceMarine*	Squad::getUnit(int index) const
{
	if (index >= 0 && index < this->_N)
		return (this->_Array[index]);
	else
		return (NULL);
}


Squad&			Squad::operator=(const Squad& srcs)
{
	if (this->_N != 0)
	{
		this->destroySquad();
	}
	this->_N = srcs._N;
	if (srcs._N == 0)
		this->_Array = NULL;
	else
	{
		this->_Array = new ISpaceMarine*[this->_N];
		for(int i = 0; i < this->_N; i++)
			this->_Array[i] = srcs._Array[i]->clone();
	}
	return *this;
}

Squad::Squad(const Squad& srcs)
{
	this->_N = 0;
	this->_Array = NULL;
	*this = srcs;
	return ;
}

Squad::Squad(void)
{
	this->_N = 0;
	this->_Array = NULL;
}

Squad::~Squad()
{
	if (this->_N != 0)
		this->destroySquad();
	return ;
}
