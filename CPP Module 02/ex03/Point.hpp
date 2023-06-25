/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:04:11 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/24 18:26:59 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point{
	
	private:
		Fixed	x;
		Fixed	y;
	public:
		Point();
		Point( const Fixed &x, const Fixed &y );
		Point( const float x, const float y );
		Point( const Point &aPoint);
		~Point();
		Point & operator = ( const Point &aFix );
		Fixed 	getX() const;
		Fixed 	getY() const;
		void	setX(const Fixed &x);
		void	setY(const Fixed &y);
		void	setX(float aX);
		void	setY(float aY);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream & operator<< ( std::ostream &out, const Point &aPoint );

#endif