/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charactar.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:11:19 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/12 00:34:11 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Charactar.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(){
	this->name = "defualt";
	for (int i = 0; i < 4; i++){
		this->inventory[i] = NULL;
	}
}

Character::Character( std::string const & aName ){
	this->name = aName;
	for (int i = 0; i < 4; i++){
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
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

Character & Character::operator= ( const Character &aCharactar ){
	if (this == &aCharactar)
		return (*this);
	this->name = aCharactar.getName();
	for (int i = 0; i < 4; i++){
		if(aCharactar.inventory[i])
			this->inventory[i] = aCharactar.inventory[i]->clone();
		else
		 	this->inventory[i] = NULL;
	}
	return (*this);	
}

std::string const & Character::getName() const{
	return (this->name);
}

void Character::equip( AMateria* m ){
	for (int i = 0; i < 4; i++){
		if (this->inventory[i] == NULL){
			this->inventory[i] = m->clone();
			break ;
		}
	}
	delete m;
}

void Character::unequip( int idx ){
	for (int i = 0; i < 4; i++){
		if (idx == i){
			delete this->inventory[i];
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
