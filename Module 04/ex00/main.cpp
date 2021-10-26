/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 16:52:19 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/05 09:04:17 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.class.hpp"
#include "Victim.class.hpp"
#include "Peon.class.hpp"
#include "Loser.class.hpp"
#include <iostream>

int main(void)
{
	Sorcerer	S1("Abel", "King");
	Sorcerer	S2("Luke", "Hertog Jan");
	Victim		V1("Mark");
	Loser		L1("Ingmar");
	Peon		P1("Remco");
	Peon		P2(P1);

	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	std::cout << S1 << std::endl;
	std::cout << S2 << std::endl;
	std::cout << V1 << std::endl;
	std::cout << L1 << std::endl;
	std::cout << P1 << std::endl;
	std::cout << P2 << std::endl;
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	S2 = S1;
	std::cout << S1 << std::endl;
	std::cout << S2 << std::endl;
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	S1.polymorph(V1);
	S1.polymorph(L1);
	P1.getPolymorphed();
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
}
