/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:37:35 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/23 16:37:38 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	setRawBits(0);
}

Fixed::Fixed( const Fixed &aFixed)
{
	setRawBits(aFixed.getRawBits());
}

Fixed::Fixed( const int aFixed)
{
	setRawBits(aFixed << this->bits);
}

Fixed::Fixed( const float aFixed)
{
	setRawBits(roundf(aFixed * 256));
}

Fixed::~Fixed(){
}

Fixed & Fixed :: operator= ( const Fixed &aFix)
{
	setRawBits(aFix.getRawBits());
	return (*this);
}

bool operator<(const Fixed &a, const Fixed &b)
{
	return (a.toFloat() < b.toFloat());
}
bool operator> (const Fixed &a, const Fixed &b)
{
	return (a.toFloat() > b.toFloat());	
}

bool operator<= (const Fixed &a, const Fixed &b)
{
	return (a.toFloat() <= b.toFloat());	
}

bool operator>= (const Fixed &a, const Fixed &b)
{
	return (a.toFloat() >= b.toFloat());	
}

bool operator== (const Fixed &a, const Fixed &b)
{
	return (a.toFloat() == b.toFloat());	
}

bool operator!= (const Fixed &a, const Fixed &b)
{
	return (a.toFloat() != b.toFloat());	
}

Fixed operator+ (const Fixed &a, const Fixed &b)
{
	return (a.toFloat() + b.toFloat());
}

Fixed operator- (const Fixed &a, const Fixed &b)
{
	return (a.toFloat() - b.toFloat());
}

Fixed operator* (const Fixed &a, const Fixed &b)
{
	return (a.toFloat() * b.toFloat());
}

Fixed operator/ (const Fixed &a, const Fixed &b)
{
	return (a.toFloat() / b.toFloat());
}

Fixed Fixed::operator++ ( int )
{
	Fixed tmp = *this;
	this->fixed++;
	return (tmp);
}

Fixed Fixed::operator++ ()
{
	this->fixed++;
	return (*this);
}

Fixed Fixed::operator-- ( int )
{
	Fixed tmp = *this;
	this->fixed--;
	return (tmp);
}

Fixed Fixed::operator-- ()
{
	this->fixed--;
	return (*this);
}

std::ostream & operator<< (std::ostream &out, const Fixed &aFix)
{
	out << aFix.toFloat();
	return (out);
}

int Fixed::getRawBits( void ) const{
	return (this->fixed);
}

void Fixed::setRawBits( int const raw ){
	this->fixed = raw;
}

float Fixed::toFloat(void) const{
	return ((float)this->fixed / 256);
}

int   Fixed::toInt( void ) const{
	return (this->fixed >> this->bits);
}
Fixed  Fixed:: min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}

Fixed  Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}

Fixed  Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);
}

Fixed  Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);
}
