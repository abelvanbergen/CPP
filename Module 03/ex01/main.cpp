/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 12:30:02 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/02/16 12:30:03 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main(void)
{
	FragTrap ft_one("Thijs");
	FragTrap ft_two("Peer");
	ScavTrap st_one("Rixt");
	ScavTrap st_two(st_one);
	ScavTrap st_three("Luke");

	srand (time(NULL));
	st_three = st_two;
	ft_one.printClass();
	ft_two.printClass();
	st_one.printClass();
	st_two.printClass();
	st_three.printClass();
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_one.rangedAttack(ft_two.getName());
	ft_two.takeDamage(ft_one.getRangedAttackDamage());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_two.meleeAttack(ft_one.getName());
	ft_one.takeDamage(ft_two.getMeleeAttackDamage());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_two.beRepaired(50);
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_two.vaulthunter_dot_exe(ft_one.getName());
	ft_one.takeDamage(ft_two.getMeleeAttackDamage());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_two.vaulthunter_dot_exe(ft_one.getName());
	ft_one.takeDamage(ft_two.getMeleeAttackDamage());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_two.rangedAttack(ft_one.getName());
	ft_one.takeDamage(ft_two.getRangedAttackDamage());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_two.rangedAttack(ft_one.getName());
	ft_one.takeDamage(ft_two.getRangedAttackDamage());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_two.vaulthunter_dot_exe(st_one.getName());
	st_one.takeDamage(ft_two.getMeleeAttackDamage());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_two.vaulthunter_dot_exe(st_one.getName());
	st_one.takeDamage(ft_two.getMeleeAttackDamage());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_two.vaulthunter_dot_exe(st_one.getName());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	st_one.meleeAttack(ft_two.getName());
	ft_two.takeDamage(st_one.getMeleeAttackDamage());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	st_one.rangedAttack(ft_two.getName());
	ft_two.takeDamage(st_one.getRangedAttackDamage());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	st_one.challengeNewcomer(ft_one.getName());
	st_one.challengeNewcomer(ft_two.getName());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
}
