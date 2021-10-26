/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 10:32:02 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/13 13:27:02 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	write_name(std::string str)
{
	int	len;

	len = str.length();
	if(len <= 10)
	{
		for (int i = len; i < 10; i++)
			std::cout << " ";
		std::cout << str << "|";
	}
	else
	{
		std::cout << str.substr(0, 9) << ".|";
	}
}

void	make_overview(int number_of_contacts, Contact contact[8])
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     index|first name| last name| nick name|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for(int i = 0; i < number_of_contacts; i++)
	{
		std::cout << "|         " << i << "|";
		write_name(contact[i].get_name(first));
		write_name(contact[i].get_name(last));
		write_name(contact[i].get_name(nick));
		std::cout << std::endl;
	}
	for (int i = number_of_contacts; i < 8; i++)
		std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

int main(void)
{
	int				index;
	int				i_to_show;
	std::string		buf;
	Contact			contact[8];

	index = 0;
	std::cout << "Welcome to this Phonebook" << std::endl;
	while(1)
	{
		std::cout << "Please enter what you want to do: (ADD, SEARCH or EXIT)" << std::endl;
		std::getline(std::cin, buf);
		for(int i = 0; buf[i] != '\0'; i++)
			buf[i] = (char)toupper(buf[i]);
		if(buf == "ADD")
		{
			if(index < 8)
			{
				contact[index].add_contact();
				index++;
			}
			else
			{
				std::cout << "The phonebook is full" << std::endl;
			}
		}
		else if(buf == "SEARCH")
		{
			make_overview(index, contact);
			std::cout << "Which do you want to view? Please enter the index number" << std::endl;
			std::getline(std::cin, buf);
			if(buf[0] >= '0' && buf[0] <= '7' && buf[1] == '\0')
				i_to_show = buf[0] - '0';
			else
				i_to_show = 8;
			if (i_to_show < index)
				contact[i_to_show].show_contact(i_to_show);
			else
				std::cout << "This is not a falid index" << std::endl;
		}
		else if(buf == "EXIT")
			return(0);
	}
}
