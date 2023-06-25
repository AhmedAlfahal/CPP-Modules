/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:37:48 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/25 15:37:49 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	Fixed x1( 3.654f ); Fixed y1( 9.54f );
	Fixed x2( 6.654f); Fixed y2( 9.564f );
	Fixed x3( 8.654f ); Fixed y3( 6.654f );
	Fixed x4( 6 ); Fixed y4( 9.4f );
	Point p1(x1, y1);
	Point p2(x2, y2);
	Point p3(x3, y3);
	Point p4(x4, y4);
	if (bsp(p1, p2, p3 , p4))
		std::cout << "Yes" << std::endl;
	else if (!bsp(p1, p2, p3 , p4))
		std::cout << "NO" << std::endl;
	return 0;
}
