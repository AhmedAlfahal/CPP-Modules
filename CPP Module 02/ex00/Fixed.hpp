/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:37:42 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/09 21:06:37 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed{
	private:
		int fixed;
		static const int bits;
	public:
		Fixed();
		Fixed( Fixed &aFix);
		Fixed & Fixed ::operator= ( const Fixed &aFix);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif