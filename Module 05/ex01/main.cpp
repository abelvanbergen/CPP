/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:09:28 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/03/29 14:59:19 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# include "Bureaucrat.class.hpp"
# include "Form.class.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	Abel("Abel", 1);

		Form 		f("dipoma", 5, 5);

		std::cout << Abel <<  f << std::endl;
		Abel.signform(f);
		Bureaucrat	Mark("Mark", 150);
		Form		f1("diploma", 149, 149);
		// Mark.increaseGrade();
		std::cout << Mark << std::endl;
		Mark.signform(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
