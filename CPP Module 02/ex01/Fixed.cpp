/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:37:35 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/23 12:17:52 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &aFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(aFixed.getRawBits());
}

Fixed::Fixed( const int aFixed)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(aFixed << this->bits);
}

Fixed::Fixed( const float aFixed)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(aFixed * 256));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed :: operator= ( const Fixed &aFix)
{
	this->fixed = aFix.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
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
