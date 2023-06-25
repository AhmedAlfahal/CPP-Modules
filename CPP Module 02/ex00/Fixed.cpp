/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:37:35 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/25 15:45:49 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed & Fixed :: operator= ( Fixed &aFix){
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed = aFix.getRawBits();
	return (*this);
}
Fixed::Fixed(){
	this->fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed( Fixed &aFix){
	std::cout << "Copy constructor called" << std::endl;
	this->fixed = aFix.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed);
}
void Fixed::setRawBits( int const raw ){
	this->fixed = raw;
}