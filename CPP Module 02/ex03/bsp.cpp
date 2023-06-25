/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:34:51 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/25 15:38:18 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed tringale_area(Point a, Point b, Point c)
{
	Fixed area = 0.5f * (( a.getX() * ( b.getY() - c.getY() )) + ( b.getX() * ( c.getY() - a.getY() )) + (( c.getX() * ( a.getY() - b.getY() ))));
	
	if (area < Fixed(0.0f))
		area = area * Fixed(-1.0f);
	return (area);
}

static bool slope(Point a, Point b, Point c)
{
	Fixed slope1 = (a.getY() - b.getY()) / (a.getX() - b.getX());
	Fixed slope2 = (a.getY() - c.getY()) / (a.getX() - c.getX());
	
	if (slope1 == slope2)
		return (true);
	else 
		return (false);
	
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed aA = tringale_area(b, c, point);
	Fixed aB = tringale_area(a, c, point);
	Fixed aC = tringale_area(a, b, point);
	Fixed aABC = tringale_area(a, b, c);
	
	if (slope(a, b, point))
		return (false);
	else if (slope(a, c, point))
		return (false);
	else if (slope(b, c, point))
		return (false);
	else if (aA + aB + aC == aABC)
		return (true);
	else
		return (false);
}