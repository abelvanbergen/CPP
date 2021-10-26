/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/15 16:52:53 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/04/27 09:10:56 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename T >
const T&	max(const T& x, const T& y)
{
	if (x > y)
		return x;
	return y;
}

template< typename T >
const T&	min(const T& x, const T& y)
{
	if (x < y)
		return x;
	return y;
}

template< typename T >
void		swap(T& x, T& y)
{
	T	swap;
	swap = x;
	x = y;
	y = swap;
}

#endif
