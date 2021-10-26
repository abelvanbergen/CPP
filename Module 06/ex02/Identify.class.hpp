/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Identify.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/12 13:27:11 by avan-ber      #+#    #+#                 */
/*   Updated: 2021/05/12 10:03:27 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_CLASS_HPP
# define IDENTIFY_CLASS_HPP

# include <cstdlib>
# include <iostream>
# include <exception>

class Base
{
	public:
		virtual ~Base(void){}
};

class A : public Base{};

class B : public Base{};

class C : public Base{};

# endif
