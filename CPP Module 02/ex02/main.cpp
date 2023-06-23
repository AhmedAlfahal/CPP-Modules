/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:37:48 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/23 17:00:41 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a( Fixed( 5.05f ) * Fixed( 4 ) );
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << Fixed::min(b, a) << std::endl;
	return 0;
}
