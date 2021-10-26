/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/16 13:13:55 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/04/16 13:29:14 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void	print_obj(const T obj)
{
	std::cout << obj << std::endl;
}

template< typename T >
void	iter(const T* array, int len, void (*f)(T))
{
	for(int i = 0; i < len; i++)
		f(array[i]);
}

#endif
