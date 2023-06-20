/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:37:42 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/20 17:42:52 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>


class Fixed{
	private:
		float fixed;
		static const int bits = 8;
	public:
		Fixed();
		Fixed( const int aFixed);
		Fixed( const float aFixed);
		Fixed( const Fixed &aFix);
		~Fixed();
		Fixed & operator = ( const Fixed &aFix);
		Fixed & operator = ( const float aFix);
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<< (std::ostream &out, const Fixed &aFix);

#endif