/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.class.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 16:11:06 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/05 09:16:47 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.class.hpp"

void			Peon::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
	return ;
}

std::ostream&	operator<<(std::ostream& out, const Peon& obj)
{
	out << "I'm " << obj.getName() << " and I like Wickey fruit zacht!" << std::endl;
	return out;
}

Peon&			Peon::operator=(const Peon& srcs)
{
	std::cout << "Peon assignment operator called" << std::endl;
	Victim::operator=(srcs);
	return *this;
}

Peon::Peon(const Peon& srcs) : Victim(srcs)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(const std::string& name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}
