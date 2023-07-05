/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:18:39 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/05 13:08:00 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"AMateria.hpp"

AMateria::AMateria(){
	this->type = "";
}

AMateria::AMateria(std::string const & type){
	this->type = type;
}

AMateria::AMateria( const AMateria &aAMateria ){
	if (this == &aAMateria)
		return ;
	*this = aAMateria;
}
AMateria::~AMateria(){
}

AMateria & AMateria::operator=( const AMateria &aAMateria){
	if (this == &aAMateria)
		return (*this);
	this->type = aAMateria.type;
	return (*this);
}

std::string const & AMateria::getType() const{
	return (this->type);
}

// void AMateria::use(ICharacter& target){
	
// }


