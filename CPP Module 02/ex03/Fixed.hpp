/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:37:42 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/25 13:17:47 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
	private:
		int 				fixed;
		static const int	bits = 8;
	public:
		Fixed();
		Fixed( const Fixed &aFixed );
		Fixed( const int aFixed );
		Fixed( const float aFixed );
		~Fixed();
		Fixed & operator = ( const Fixed &aFix );
		Fixed operator++ ( int );
		Fixed operator++ ();
		Fixed operator-- ( int );
		Fixed operator-- ();
		static Fixed min(Fixed &a, Fixed &b);
		static Fixed min(const Fixed &a, const Fixed &b);
		static Fixed max(Fixed &a, Fixed &b);
		static Fixed max(const Fixed &a, const Fixed &b);
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

bool operator< ( const Fixed &a, const Fixed &b );
bool operator> ( const Fixed &a, const Fixed &b );
bool operator<= ( const Fixed &a, const Fixed &b );
bool operator>= ( const Fixed &a, const Fixed &b );
bool operator== ( const Fixed &a, const Fixed &b );
bool operator!= ( const Fixed &a, const Fixed &b );
Fixed operator+ ( const Fixed &a, const Fixed &b );
Fixed operator- ( const Fixed &a, const Fixed &b );
Fixed operator* ( const Fixed &a, const Fixed &b );
Fixed operator* (const Fixed &a, const float b);
Fixed operator/ ( const Fixed &a, const Fixed &b );
std::ostream & operator<< ( std::ostream &out, const Fixed &aFix );

#endif