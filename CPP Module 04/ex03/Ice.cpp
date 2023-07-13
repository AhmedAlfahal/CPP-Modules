/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:55:53 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/13 21:09:37 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "Charactar.hpp"

Ice::Ice() : AMateria(){
	this->type = "ice";
}

Ice::Ice( const std::string aName ){
	this->type = aName;
}

Ice::Ice( const Ice &aIce ) : AMateria(aIce){
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
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const{
	return (new Ice(*this));
}
