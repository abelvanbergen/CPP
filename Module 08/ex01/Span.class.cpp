/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.class.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 17:51:15 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/10 11:32:05 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

unsigned int	Span::shortestSpan(void)
{
	if (this->_array.size() <= 1)
		throw NoSpanToFindException();
	std::sort(this->_array.begin(), this->_array.end());
	unsigned int shortest = UINT32_MAX;
	std::vector<int>::iterator it;
	for (it = this->_array.begin(); it + 1 != this->_array.end(); it++)
	{
		if ((unsigned int)(*(it + 1) - *(it)) < shortest)
			shortest = *(it + 1) - *(it);
	}
	return (shortest);
}

unsigned int	Span::longestSpan(void)
{
	if (this->_array.size() <= 1)
		throw NoSpanToFindException();
	int lowest = *(std::min_element(this->_array.begin(), this->_array.end()));
	int highest = *(std::max_element(this->_array.begin(), this->_array.end()));
	std::cout << lowest << " --- " << highest << std::endl;
	return(highest - lowest);
}

void	Span::addNumberRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_len < std::distance(begin, end) + this->_array.size())
		throw NotEnoughSpaceException();
	this->_array.insert(this->_array.end(), begin, end);
}

void	Span::addNumber(int num)
{
	if(this->_array.size() >= this->_len)
		throw ArrayFullException();
	else
		this->_array.push_back(num);
}

Span&	Span::operator=(const Span& srcs)
{
	this->_len = srcs._len;
	return *this;
}

Span::Span(const Span& srcs)
{
	*this = srcs;
	return ;
}

Span::Span(unsigned int N) : _len(N)
{
	return ;
}

Span::~Span(void)
{
	return ;
}
