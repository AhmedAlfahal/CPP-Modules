/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:37:42 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/10 18:55:57 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed{
	private:
		int fixed;
		static const int bits = 8;
	public:
		Fixed & operator= ( Fixed &aFix);
		Fixed();
		Fixed( Fixed &aFix);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif