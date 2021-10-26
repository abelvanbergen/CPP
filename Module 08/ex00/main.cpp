/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 12:58:35 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 16:45:27 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main(void)
{
	int val[]= {1, 3, 6, 7, 4, 11, 211, 90};
	std::cout << "Vector -=-=-=-=-=-=-=-=-=-=-" << std::endl;
	try
	{
		std::vector<int> vec;
		vec.assign(val, val + 8);
		std::cout << "Finding 4:" << *easyfind(vec, 4) << std::endl;
		std::cout << "Finding 90:" << *easyfind(vec, 90) << std::endl;
		std::cout << "Finding 1:" << *easyfind(vec, 1) << std::endl;
		std::cout << "Finding 12:" << *easyfind(vec, 12) << std::endl;
	}
	catch(std::exception& msg)
	{
		std::cerr << "Could not find the object" << std::endl;
	}
	try
	{
		std::list<int> lst;
		lst.assign(val, val + 8);
		std::cout << "Finding 4:" << *easyfind(lst, 4) << std::endl;
		std::cout << "Finding 90:" << *easyfind(lst, 90) << std::endl;
		std::cout << "Finding 1:" << *easyfind(lst, 1) << std::endl;
		std::cout << "Finding 12:" << *easyfind(lst, 12) << std::endl;
	}
	catch(std::exception& msg)
	{
		std::cerr << "Could not find the object" << std::endl;
	}
}
