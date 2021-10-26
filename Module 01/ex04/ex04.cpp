/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 18:29:50 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/02/11 15:04:34 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string		&ref = str;
	std::string*	ptr = &str;

	std::cout << "printing the string:" << std::endl;
	std::cout << str << std::endl;
	std::cout << "printing the refstring:" << std::endl;
	std::cout << ref << std::endl;
	std::cout << "printing the ptrstring:" << std::endl;
	std::cout << *ptr << std::endl;
}
