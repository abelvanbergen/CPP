/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 21:17:46 by abelfrancis   #+#    #+#                 */
/*   Updated: 2020/10/13 11:32:26 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(int j = 1; j < ac; j++)
		{
			for(int i = 0; av[j][i] != '\0'; i++)
			{
				av[j][i] = (char)toupper(av[j][i]);
			}
			std::cout << av[j];
		}
	}
	std::cout << std::endl;
}
