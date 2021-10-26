/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 12:58:53 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/05 16:15:07 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>

template<typename T>
typename T::iterator easyfind(T array, int obj)
{
	typename T::iterator ret = std::find(array.begin(), array.end(), obj);
	if (ret == array.end())
		throw std::exception();
	return (ret);
}

#endif

