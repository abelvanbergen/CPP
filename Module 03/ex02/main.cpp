/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 12:30:02 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/02/17 15:07:32 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main(void)
{
	FragTrap	ft_one("Abel");
	ScavTrap	st_one("Ingmar");
	FragTrap	ft_two(ft_one);
	ScavTrap	st_two("Peer");

	srand (time(NULL));
	st_two = st_one;
	ft_one.printClass();
	st_one.printClass();
	ft_two.printClass();
	st_two.printClass();
	ft_one.vaulthunter_dot_exe(st_one.getName());
	ft_one.vaulthunter_dot_exe(st_one.getName());
	st_one.challengeNewcomer(ft_one.getName());
	st_one.challengeNewcomer(ft_one.getName());
}
