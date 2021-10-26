/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 10:34:37 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/13 13:19:04 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

enum				e_name
{
	first = 0,
	last = 1,
	nick = 2
};

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nick_name;
		std::string _login;
		std::string _postal_adress;
		std::string _email_adress;
		std::string _phone_number;
		std::string _birthday_date;
		std::string _favorite_meal;
		std::string _underwear_color;
		std::string _darkest_secret;

	public:
		void		add_contact(void);
		std::string	get_name(int name);
        void		show_contact(int index);
		Contact(void);
		~Contact(void);
};

#endif
