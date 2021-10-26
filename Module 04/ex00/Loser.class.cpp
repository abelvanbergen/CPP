/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Loser.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 10:12:35 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/05 09:19:14 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Loser.class.hpp"

void		Loser::getPolymorphed(void) const
{
	std::cout << this->_Name << " has turned into a awesome rpet!" << std::endl;
	return ;
}

std::ostream&	operator<<( std::ostream& out, const Loser& obj)
{
	out << "I'm " << obj.getName() << " and I like Mona Yoghert met vruchtevlekken!" << std::endl;
	return out;
}

Loser&			Loser::operator=(const Loser& srcs)
{
	Victim::operator=(srcs);
	std::cout << "Loser assignment operator called" << std::endl;
	return *this;
}

Loser::Loser(const Loser& srcs) : Victim(srcs)
{
	std::cout << "whossh woosshhh" << std::endl;
	return ;
}

Loser::Loser(const std::string& name) : Victim(name)
{
	std::cout << "whossh woosshhh" << std::endl;
	return ;
}

Loser::~Loser(void)
{
	std::cout << "Zip zip zip zi...." << std::endl;
	return ;
}
