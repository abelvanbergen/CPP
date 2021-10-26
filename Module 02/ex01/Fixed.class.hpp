/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 15:12:17 by abelfrancis   #+#    #+#                 */
/*   Updated: 2021/02/11 20:03:09 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractional_bits = 8;

	public:
		int		getRawBits(void) const;
		void	setRawBits(const int raw);

		int	toInt(void) const;
		Fixed(const int int_nbr);

		float toFloat(void) const;
		Fixed(const float float_nbr);
		
		Fixed& operator=(const Fixed &srcs);
		Fixed(const Fixed &srcs);
		Fixed(void);
		~Fixed(void);
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif
