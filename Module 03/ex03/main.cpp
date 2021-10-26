/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 12:30:02 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/06 14:16:47 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "NinjaTrap.class.hpp"

int main(void)
{
	FragTrap	ft_one("Abel");
	ScavTrap	st_one("Ingmar");
	FragTrap	ft_two(ft_one);
	ScavTrap	st_two("Peer");
	NinjaTrap	nt_one("Rixt");
	ClapTrap	ct_one("Remco");

	srand (time(NULL));
	st_two = st_one;
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_one.printClass();
	st_one.printClass();
	ft_two.printClass();
	st_two.printClass();
	ct_one.printClass();
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_one.vaulthunter_dot_exe(st_one.getName());
	ft_one.vaulthunter_dot_exe(st_one.getName());
	st_one.challengeNewcomer(ft_one.getName());
	st_one.challengeNewcomer(ft_one.getName());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	nt_one.ninjaShoebox(ft_one);
	nt_one.ninjaShoebox(st_one);
	nt_one.ninjaShoebox(nt_one);
	nt_one.ninjaShoebox(ct_one);
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
}
