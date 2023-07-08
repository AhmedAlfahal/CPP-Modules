/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:55:53 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/09 01:06:20 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
	this->type = "ice";
}

Ice::Ice( const Ice &aIce ){
	if (this == &aIce)
		return ;
	*this = aIce;	
}

Ice::~Ice(){
	
}

Ice & Ice::operator= ( const Ice &aIce ){
	if (this == &aIce)
		return (*this);
	this->type = aIce.getType();
	return (*this);
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at ice *" << std::endl;
}

AMateria* Ice::clone() const{
	return (new Ice(*this));
}
