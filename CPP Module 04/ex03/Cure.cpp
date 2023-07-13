/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:05:33 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/13 21:09:33 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "Charactar.hpp"

Cure::Cure() : AMateria(){
	this->type = "cure";
}

Cure::Cure( const std::string aName ){
	this->type = aName;
}

Cure::Cure( const Cure &aCure ) : AMateria(aCure){
	if (this == &aCure)
		return ;
	*this = aCure;	
}

Cure::~Cure(){
}

Cure & Cure::operator= ( const Cure &aCure ){
	if (this == &aCure)
		return (*this);
	this->type = aCure.getType();
	return (*this);
}

void Cure::use(ICharacter& target){
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}