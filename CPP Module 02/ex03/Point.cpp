/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:04:08 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/23 19:23:19 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Point.hpp"

Point::Point()
{
	this->x.setRawBits(0);
	this->y.setRawBits(0);
}

Point::Point( const float aX, const float aY )
{
	Fixed	tmpX(x);
	Fixed	tmpY(y);
	this->x = tmpX;
	this->y = tmpY;
}

Point::Point( const Point &aPoint)
{
	this->x = aPoint.x;
}

Point::~Point()
{
	
}

Point::Point & operator = ( const Point &aFix )
{
	
}
