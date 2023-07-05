/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:12:30 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/05 13:11:44 by kali             ###   ########.fr       */
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
	std::cout << "* heals " << target.type << " wounds *" << std::endl;
}