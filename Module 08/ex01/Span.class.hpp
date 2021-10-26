/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.class.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 17:32:37 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/10 11:08:58 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

class Span
{
	private:
		unsigned int		_len;
		std::vector<int>	_array;
		Span();
	public:
		class NotEnoughSpaceException : public std::exception
		{
			const char*	what(void) const throw()
			{
				return ("There is not enough space to add the full array");
			};
		};
		class ArrayFullException : public std::exception
		{
			const char*	what(void) const throw()
			{
				return ("The array is full");
			};
		};
		class NoSpanToFindException : public std::exception
		{
			const char*	what(void) const throw()
			{
				return ("There is no span to find because there are not enough elements");
			};
		};
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			addNumber(int num);
		void			addNumberRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		Span&	operator=(const Span& srcs);
		Span(const Span& srcs);
		Span(unsigned int N);
		virtual ~Span();
};

#endif
