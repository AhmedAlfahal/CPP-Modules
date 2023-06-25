/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:34:51 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/25 13:47:11 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed tringale_area(Point a, Point b, Point c)
{
	Fixed tmp = 0.5f * (( a.getX() * ( b.getY() - c.getY() )) + ( b.getX() * ( c.getY() - a.getY() )) + (( c.getX() * ( a.getY() - b.getY() ))));
	
	if (tmp < Fixed(0.0f))
		tmp = tmp * Fixed(-1.0f);
	return (tmp);
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed aA = tringale_area(b, c, point);
	Fixed aB = tringale_area(a, c, point);
	Fixed aC = tringale_area(a, b, point);
	Fixed aABC = tringale_area(a, b, c);
	
	std::cout << "aABC is	" << aABC << "	aA + aB + aC is	" << aA + aB + aC << std::endl;
	if (aA + aB + aC == aABC)
		return (true);
	else
		return (false);
}