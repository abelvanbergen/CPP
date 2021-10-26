/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/12 13:44:35 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/12 10:03:42 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.class.hpp"

void identify_from_reference( Base & p)
{
	try {
		A&	a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (std::bad_cast &bc) {}
	try {
		B&	b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch (std::bad_cast &bc) {}
	try {
		C&	c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch (std::bad_cast &bc) {}
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

Base*	generate(void)
{
	int		rand_num = rand() % 3;
	if (rand_num == 0)
	{
		std::cout << " Generate A" << std::endl;
		return (new A);
	}
	else if (rand_num == 1)
	{
		std::cout << " Generate B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << " Generate C" << std::endl;
		return (new C);
	}
}

int main(void)
{
	srand(time(NULL));

	Base *unknown = generate();

	identify_from_pointer(unknown);
	identify_from_reference(*unknown);
	return 0;
}
