/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/12 11:41:43 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/02/16 12:12:28 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

int main(void)
{
	FragTrap ft_one("Thijs");
	FragTrap ft_two("Peer");
	FragTrap ft_three("Rixt");
	FragTrap ft_four(ft_one);
	FragTrap ft_five("Luke");

	srand (time(NULL));
	ft_five = ft_one;
	ft_one.printClass();
	ft_two.printClass();
	ft_three.printClass();
	ft_four.printClass();
	ft_five.printClass();
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
	ft_two.vaulthunter_dot_exe(ft_three.getName());
	ft_three.takeDamage(ft_two.getMeleeAttackDamage());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_two.vaulthunter_dot_exe(ft_three.getName());
	ft_three.takeDamage(ft_two.getMeleeAttackDamage());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	ft_two.vaulthunter_dot_exe(ft_three.getName());
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
}
