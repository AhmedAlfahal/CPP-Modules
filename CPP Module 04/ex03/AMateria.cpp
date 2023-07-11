/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:55:11 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/12 00:24:31 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Charactar.hpp"

AMateria::AMateria(){
	this->type = "Defualt";
}

AMateria::AMateria( std::string const & type ){
	this->type = type;
}

AMateria::AMateria( const AMateria &aAMateria ){
	if (this == &aAMateria)
		return ;
	*this = aAMateria;	
}

AMateria::~AMateria(){
}

AMateria & AMateria::operator= ( const AMateria &aAMateria ){
	if (this == &aAMateria)
		return (*this);
	this->type = aAMateria.getType();
	return (*this);
}

std::string const & AMateria::getType() const{
	return (this->type);
}

void AMateria::use( ICharacter& target ){
	(void)target;
}