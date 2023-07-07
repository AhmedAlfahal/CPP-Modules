/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:12:30 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/07 22:39:51 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
	this->type = "ice";
}

Ice::Ice( const Ice &aIce){
	if (this == &aIce)
		return ;
	*this = aIce;
}

Ice::~Ice(){	
}

Ice & Ice::operator=( const Ice &aIce ){
	if (this == &aIce)
		return (*this);
	this->type = aIce.type;
	return (*this);	
}

AMateria* Ice::clone() const{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target){
	(void)target;
	std::cout << "* heals " << this->type << " wounds *" << std::endl;
}
