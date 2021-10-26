/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 12:30:02 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/01 17:34:57 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.class.hpp"

int main(void)
{
	SuperTrap super("Abel");
	NinjaTrap ninja("Ingmar");

	super.printClass();
	super.rangedAttack(ninja.getName());
	super.ninjaShoebox(ninja);
	super.vaulthunter_dot_exe(ninja.getName());
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl;
	SuperTrap test(super);
	SuperTrap assign("Mark");

	assign = super;
	return (0);
}

