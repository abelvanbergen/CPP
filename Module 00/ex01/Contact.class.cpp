/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 10:31:59 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/13 13:14:15 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"


void	Contact::add_contact(void)
{
	std::cout << "Adding contact.." << std::endl;
	std::cout << "Add first name: ";
	getline(std::cin, _first_name);
	std::cout << "Add last name: ";
	getline(std::cin, _last_name);
	std::cout << "Add nick name: ";
	getline(std::cin, _nick_name);
	std::cout << "Add login: ";
	getline(std::cin, _login);
	std::cout << "Add postal adress: ";
	getline(std::cin, _postal_adress);
	std::cout << "Add email adress: ";
	getline(std::cin, _email_adress);
	std::cout << "Add phone number: ";
	getline(std::cin, _phone_number);
	std::cout << "Add birthday date: ";
	getline(std::cin, _birthday_date);
	std::cout << "Add favorite meal: ";
	getline(std::cin, _favorite_meal);
	std::cout << "Add underwear color: ";
	getline(std::cin, _underwear_color);
	std::cout << "Add darkest secret: ";
	getline(std::cin, _darkest_secret);
}

std::string	Contact::get_name(int name)
{
	if (name == first)
		return(_first_name);
	else if (name == last)
		return(_last_name);
	else
		return(_nick_name);
}

void	Contact::show_contact(int index)
{
	std::cout << "Contact of index " << index << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "First name:       " << _first_name << std::endl;
	std::cout << "Last name:        " << _last_name << std::endl;
	std::cout << "Nick name:        " << _nick_name << std::endl;
	std::cout << "Login:            " << _login << std::endl;
	std::cout << "Postal Adress:    " << _postal_adress << std::endl;
	std::cout << "Email adress:     " << _email_adress << std::endl;
	std::cout << "Phone number:     " << _phone_number << std::endl;
	std::cout << "Birthday date:    " << _birthday_date << std::endl;
	std::cout << "Favorite meal:    " << _favorite_meal << std::endl;
	std::cout << "Underwear color:  " << _underwear_color << std::endl;
	std::cout << "Darkest secret:   " << _darkest_secret << std::endl;
	std::cout << "=================================" << std::endl;
}

Contact::Contact(void)
{
	// std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}
