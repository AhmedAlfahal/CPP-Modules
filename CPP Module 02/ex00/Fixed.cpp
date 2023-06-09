/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:37:35 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/09 21:04:51 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed( Fixed &aFix){
	this->fixed = aFix.getRawBits();	
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(){
}
int Fixed::getRawBits( void ) const{
	return (this->fixed);
}
void Fixed::setRawBits( int const raw ){
	this->fixed = raw;
}