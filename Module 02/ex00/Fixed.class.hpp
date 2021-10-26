/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 13:35:14 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/02/12 11:03:27 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractional_bits = 8;

	public:
		int		getRawBits(void) const;
		void	setRawBits(const int raw);

		Fixed& operator=(const Fixed &srcs);
		Fixed(const Fixed &srcs);
		Fixed(void);
		~Fixed(void);
};

#endif
