/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 08:47:58 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/02/02 10:44:38 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*b = new Pony("Olle", "Heap");
	b->display_pony_info();
	b->pony_makes_sound();
	b->run_pony();
	delete b;
	std::cout << "before end function" << std::endl;
}

void	ponyOnTheStack(void)
{
	Pony	a = Pony("Lasse", "Stack");
	a.display_pony_info();
	a.pony_makes_sound();
	a.run_pony();
	std::cout << "before end function" << std::endl;
}

int main(void)
{
	std::cout << "ponyOnTheHeap" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	std::cout << "ponyOnTheStack" << std::endl;
	ponyOnTheStack();
	std::cout << "Pony is destructed after you went out of the scope" << std::endl;
	return(0);
}
