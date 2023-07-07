/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:22:46 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/07 22:17:20 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

ICharacter::ICharacter(){
	this->name = "default";
}
ICharacter::ICharacter( std::string aName){
	this->name = aName;
}

ICharacter::ICharacter( const ICharacter &aICharacter){
	if (this == &aICharacter)
		return ;
	*this = aICharacter;
}

ICharacter & ICharacter::operator=( const ICharacter &aICharacter ){
	if (this == &aICharacter)
		return (*this);
	for (int i = 0; i < 4; i++)
		this->inventory[i] = aICharacter.inventory[i]->clone();
	return (*this);
}
