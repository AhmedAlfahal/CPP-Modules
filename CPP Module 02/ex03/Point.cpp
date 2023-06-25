/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:04:08 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/24 15:26:38 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Point.hpp"

Point::Point()
{
	this->x.setRawBits(0);
	this->y.setRawBits(0);
}

Point::Point( const Fixed &x, const Fixed &y ){
	this->setX(x);
	this->setY(y);
}

Point::Point( const float aX, const float aY )
{
	this->setX(aX);
	this->setY(aY);
}

Point::Point( const Point &aPoint)
{
	this->setX(aPoint.getX());
	this->setY(aPoint.getY());
}

Point::~Point(){
}

Point & Point :: operator= ( const Point &aPoint )
{
	this->x = aPoint.getX();
	this->y = aPoint.getY();
	
	return (*this);
}

Fixed Point::getX() const {
	return (this->x);
}

Fixed Point::getY() const {
	return (this->y);
}

void Point::setX(const Fixed &x){
	this->x = x;
}

void Point::setY(const Fixed &y){
	this->y = y;
}

void Point::setX(float x){
	Fixed tmp(x);
	this->x = tmp;
}

void Point::setY(float y){
	Fixed tmp(y);
	this->y = tmp;
}

std::ostream & operator<< ( std::ostream &out, const Point &aPoint )
{
	out << "x =	" << aPoint.getX() << "		,y =	" << aPoint.getY() << std::endl;
	return (out);
}