/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 13:34:56 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/02/03 10:06:45 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie*		ZombieEvent::randomChump()
{
	std::string names[] = {"Noah", "Daan", "Lucas", "Levi", "Sem", "Finn",
			"Liam", "James", "Milan", "Luuk", "Bram", "Noud", "Sam", "Mees",
			"Jesse", "Adam", "Max", "Thomas", "Benjamin", "Boaz", "Emma", "Mila",
			"Sophie", "Zoe", "Julia", "Tess", "Sara", "Anna", "Evi", "Saar",
			"Nora", "Lieke", "Olivia", "Yara", "Liv", "Noor", "Eva", "Lotte",
			"Lauren", "Milou"};
	int index = rand() % 40;
	Zombie *new_zombie = new Zombie(names[index], this->_type);
	new_zombie->announce();
	return (new_zombie);
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie *new_zombie = new Zombie(name, this->_type);
	return (new_zombie);
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

ZombieEvent::ZombieEvent()
{
	std::cout << "ZombieEvent Constructor called" << std::endl;
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "ZombieEvent Destructor called" << std::endl;
	return ;
}
