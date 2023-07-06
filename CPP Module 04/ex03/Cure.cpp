/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:12:28 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/06 23:21:05 by aalfahal         ###   ########.fr       */
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
	std::cout << "* shoots an ice bolt at " << this->type << " *" << std::endl;
}

std::string const & Cure::getName() const{
	return (this->getName());
}
void Cure::equip(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (this->inventory[i] == NULL)
			this->inventory[i] = m;
	}
}
void Cure::unequip(int idx){
	for (int i = 0; i < 4; i++){
		if (i == idx)
			this->inventory[i] = NULL;
	}
}
void Cure::use(int idx, ICharacter& target){
	for (int i = 0; i < 4; i++){
		if (i == idx)
			AMateria::use(target);
	}
}