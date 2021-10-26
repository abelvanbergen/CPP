/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 17:32:11 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/14 19:17:00 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

void	ZombieHorde::announce(void)
{
	for(int i = 0; i < this->_n; i++)
		this->_horde[i].announce();
}

ZombieHorde::ZombieHorde(int N)
{
	std::cout << "ZombieHorde Constructor called" << std::endl;
	std::string names[] = {"Noah", "Daan", "Lucas", "Levi", "Sem", "Finn",
		"Liam", "James", "Milan", "Luuk", "Bram", "Noud", "Sam", "Mees",
		"Jesse", "Adam", "Max", "Thomas", "Benjamin", "Boaz", "Emma", "Mila",
		"Sophie", "Zoe", "Julia", "Tess", "Sara", "Anna", "Evi", "Saar",
		"Nora", "Lieke", "Olivia", "Yara", "Liv", "Noor", "Eva", "Lotte",
		"Lauren", "Milou"};
	this->_horde = new Zombie[N];
	this->_n = N;
	for(int i = 0; i < N; i++)
	{
		int index = rand() % 40;
		this->_horde[i].setType("screamer");
		this->_horde[i].setName(names[index]);
	}
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "ZombieHorde Destructor called" << std::endl;
	delete [] this->_horde;
	return ;
}
