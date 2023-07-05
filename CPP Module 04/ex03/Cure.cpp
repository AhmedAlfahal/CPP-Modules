/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:12:28 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/05 15:58:32 by aalfahal         ###   ########.fr       */
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