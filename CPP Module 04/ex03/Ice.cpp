/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:12:30 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/06 23:21:15 by aalfahal         ###   ########.fr       */
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
	std::cout << "* heals " << this->type << " wounds *" << std::endl;
}

std::string const & Ice::getName() const{
	return (this->getName());
}
void Ice::equip(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (this->inventory[i] == NULL)
			this->inventory[i] = m;
	}
}
void Ice::unequip(int idx){
	for (int i = 0; i < 4; i++){
		if (i == idx)
			this->inventory[i] = NULL;
	}
}
void Ice::use(int idx, ICharacter& target){
	for (int i = 0; i < 4; i++){
		if (i == idx)
			AMateria::use(target);
	}
}