/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:37:35 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/20 17:44:36 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed & Fixed :: operator= ( const Fixed &aFix)
{
	this->fixed = aFix.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed &Fixed::operator=(const float aFix)
{
	this->fixed = aFix;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream & operator << (std::ostream &out, const Fixed &aFix)
{
	out << aFix.toFloat();
	return (out);
}

Fixed::Fixed( const int aFixed)
{
	fixed = aFixed;
}

Fixed::Fixed( const float aFixed)
{
	fixed = aFixed;
}

Fixed::Fixed(){
	this->fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &aFix)
{
	this->fixed = aFix.getRawBits();	
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
	return (this->fixed);
}

void Fixed::setRawBits( int const raw ){
	this->fixed = raw;
}

float Fixed::toFloat(void) const
{
	std::cout << "Float constructor called" << std::endl;
	return (1);
}
int   Fixed::toInt( void ) const{
	std::cout << "Int constructor called" << std::endl;
	return (1);
}
