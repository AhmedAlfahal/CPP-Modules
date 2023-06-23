/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:04:11 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/23 19:15:01 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include"Fixed.hpp"
class Point{
	
	private:
		Fixed	x;
		Fixed	y;
	public:
		Point();
		Point( const float x, const float y );
		Point( const Point &aPoint);
		~Point();
		Point & operator = ( const Point &aFix );
};
#endif