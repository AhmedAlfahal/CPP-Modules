/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charactar.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:11:19 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/09 20:26:05 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Charactar.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(){
	this->name = "defualt";
	for (int i = 0; i < 4; i++){
		this->inventory[i] = new Cure();
		this->inventory[i] = NULL;
	}
}

Character::Character( std::string const & aName ){
	this->name = aName;
	for (int i = 0; i < 4; i++){
		this->inventory[i] = new Cure();
		this->inventory[i] = NULL;
	}
}

Character::Character( const Character &aCharacter ){
	if(this == &aCharacter)
		return ;
	*this = aCharacter;
}

Character::~Character(){
	for (int i = 0; i < 4; i++){
		delete this->inventory[i];
	}
}

Character & Character::operator= ( const Character &aCharactar ){
	if (this == &aCharactar)
		return (*this);
	this->name = aCharactar.getName();
	for (int i = 0; i < 4; i++){
		if (aCharactar.inventory[i]->getType() == "ice")
			this->inventory[i] = aCharactar.inventory[i]->clone();
		else if (aCharactar.inventory[i]->getType() == "cure")
			this->inventory[i] = aCharactar.inventory[i]->clone();
	}
	return (*this);	
}

std::string const & Character::getName() const{
	return (this->name);
}

void Character::equip( AMateria* m ){
	for (int i = 0; i < 4; i++){
		if (this->inventory[i] == NULL)
			this->inventory[i] = m;
	}
}

void Character::unequip( int idx ){
	for (int i = 0; i < 4; i++){
		if (idx == i){
			delete this->inventory[i];
			this->inventory[i] = new Ice();
			this->inventory[i] = NULL;
		}
	}
}

void Character::use( int idx, ICharacter& target ){
	for (int i = 0; i < 4; i++){
		if (idx == i)
			this->inventory[i]->use(target);
	}
}
