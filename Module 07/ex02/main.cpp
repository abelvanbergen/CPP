/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/16 13:40:09 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/07 09:01:59 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.class.hpp"

int	test(void)
{

	std::cout << "Int -=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	Array<int> int_array1(10);
	for (int i = 0 ; i < 10; i++)
		int_array1[i] = i;
	try {
		std::cout << int_array1[7] << std::endl;
		std::cout << int_array1[10] << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	Array<int> int_array2(int_array1);
	std::cout << int_array2.size() << std::endl;
	std::cout << int_array2[6] << std::endl << std::endl;
	std::cout << "Float -=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
	Array<float> float_array1(15);
	for (float i = 0 ; i < 10; i++)
		float_array1[i] = i;
	try {
		std::cout << float_array1[0] << std::endl;
		std::cout << float_array1[-4] << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << float_array1.size() << std::endl;
	std::cout << float_array1[6] << std::endl;
	// this is to show that this is not possible
	// Array<float> int_array2(int_array1);
	Array<int> int_array3;
	Array<int> int_array4(10);
	int_array4 = int_array3;
	int_array3 = int_array4;
	return 0;
}

int main(void)
{
	test();
	system("leaks a.out | grep 'leaks for'");
}
