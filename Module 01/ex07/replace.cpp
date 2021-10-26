/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 16:23:45 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/02/18 11:08:55 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "ERROR-- Not the right amount of arguments";
		return(0);
	}
	else
	{
		int				index;
		std::string		readline;
		std::string		replace_file = std::string(av[1]) + ".replace";
		std::ifstream	inputstream(av[1]);
		std::ofstream	outputstream(replace_file.c_str());
		std::string		s1 = av[2];
		std::string		s2 = av[3];

		if (!inputstream || !outputstream)
		{
			std::cerr << "File cannot be opened" << std::endl;
			return 1;
		}
		while (std::getline(inputstream, readline))
		{
			index = 0;
			while (std::string::npos != readline.find(s1, index))
			{
				index = readline.find(s1, index);
				readline.replace(index, s1.length(), s2);
				index += s2.length();
			}
			outputstream << readline;
			if (!inputstream.eof())
				outputstream << std::endl;
		}
	}
	return (0);
}
