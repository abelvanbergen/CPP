/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 17:31:53 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/10 11:32:29 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"
#include <numeric>

int main()
{
	int val[] = {1, 5, 12, -124, 567, 88, 25644522};
	Span sp = Span(10);
	std::vector<int> vec;
	vec.assign(val, val + 7);
	try
	{
		sp.addNumber(0);
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch(std::exception& msg)
	{
		std::cerr << msg.what() << std::endl;
	}
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	try
	{
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	}
	catch(std::exception& msg)
	{
		std::cerr << msg.what() << std::endl;
	}
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	try
	{
		sp.addNumber(INT32_MIN);
		sp.addNumber(INT32_MAX);
		sp.addNumber(12);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		sp.addNumberRange(vec.begin(), vec.end());
	}
	catch(std::exception& msg)
	{
		std::cerr << msg.what() << std::endl;
	}
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	try
	{
		sp.addNumberRange(vec.begin(), vec.end() - 1);
		sp.addNumber(11);
	}
	catch(std::exception& msg)
	{
		std::cerr << msg.what() << std::endl;
	}
	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	try
	{
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << "Longest span == UINT_MAX == " << UINT32_MAX << std::endl;
	}
	catch(std::exception& msg)
	{
		std::cerr << msg.what() << std::endl;
	}
}
