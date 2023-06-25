/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:37:48 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/25 13:47:59 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	Fixed a( 3.0f );
	Fixed b( 5.0f );
	Fixed c( 7.0f);
	Fixed d( 7.0f );
	Fixed e( 7.0f );
	Fixed f( 4.0f );
	Fixed g( 7 );
	Fixed h( 5.0f );
	Point p1(a, b);
	Point p2(c, d);
	Point p3(e, f);
	Point p4(g, h);
	if (bsp(p1, p2, p3 , p4))
		std::cout << "Yes" << std::endl;
	else if (!bsp(p1, p2, p3 , p4))
		std::cout << "NO" << std::endl;
	return 0;
}
