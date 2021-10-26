/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.class.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/10 11:44:36 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/12 14:28:17 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

#include <stack>
#include <deque>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack< T, Container >
{
	private:

	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		MutantStack&	operator=(const MutantStack& srcs)
		{
			this->c = srcs.c;
			return *this;
		}
		MutantStack(const MutantStack& srcs)
		{
			*this = srcs;
			return ;
		}
		MutantStack(){}
		~MutantStack(){}
		iterator begin()
		{
			return (this->c.begin());
		}
		const_iterator begin() const
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
		const_iterator end() const
		{
			return (this->c.end());
		}
		reverse_iterator rbegin()
		{
			return (this->c.rbegin());
		}
		const_reverse_iterator rbegin() const
		{
			return (this->c.rbegin());
		}
		reverse_iterator rend()
		{
			return (this->c.rend());
		}
		const_reverse_iterator rend() const
		{
			return (this->c.rend());
		}
};

#endif
