/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/16 13:43:08 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/05/07 09:00:54 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

# include <iostream>
# include <exception>

template< typename T >
class Array
{
	private:
		T*				_array;
		unsigned int	_len;

	public:
		class ElemetOutOfLimitException : public std::exception
		{
			const char*	what(void) const throw()
			{
				return ("The Element tried to exit does't exist");
			};
		};

		unsigned int	size(void)
		{
			return this->_len;
		}

		T&		operator[](unsigned int index)
		{
			if (index >= this->_len)
				throw ElemetOutOfLimitException();
			return this->_array[index];
		}

		Array&		operator=(const Array& srcs)
		{
			if (this != &srcs)
			{
				if (this->_len != 0)
					delete this->_array;
				if (srcs._len == 0)
					this->_array = NULL;
				else
					this->_array = new T[srcs._len]();
				this->_len = srcs._len;
				for (unsigned int i = 0; i < this->_len; i++)
					this->_array[i] = srcs._array[i];
			}
			return *this;
		}

		Array(const Array& srcs)
		{
			this->_len = srcs._len;
			this->_array = new T[srcs._len]();
			for (unsigned int i = 0; i < this->_len; i++)
				this->_array[i] = srcs._array[i];
		}

		Array(unsigned int n)
		{
			this->_array = new T[n]();
			this->_len = n;
		}

		Array(void)
		{
			this->_array = NULL;
			this->_len = 0;
		}

		~Array(void)
		{
			if (this->_len != 0)
				delete this->_array;
			return ;
		}
};

#endif
