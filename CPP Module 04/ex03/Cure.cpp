/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:12:28 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/05 13:10:37 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(){
	this->type = "cure";
}

Cure::Cure( const Cure &aCure){
	if (this == &aCure)
		return ;
	*this = aCure;
}

Cure::~Cure(){	
}

Cure & Cure::operator=( const Cure &aCure ){
	if (this == &aCure)
		return (*this);
	this->type = aCure.type;
	return (*this);	
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.type << " *" << std::endl;
}