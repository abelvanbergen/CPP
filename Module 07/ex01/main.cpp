/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/16 13:21:47 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/04/19 17:34:03 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	const float	floats[] = {0.65, 8.90, 4.55, 6, 888.6666, 420.69, -128.125};
	const std::string strings[] = {"never", "gonna", "give", "you", "up"};
	iter(floats, 4, print_obj);
	iter(floats, 7, print_obj);
	iter(strings, 5, print_obj);
}
