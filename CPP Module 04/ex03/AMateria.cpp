/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:18:39 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/06 18:11:38 by aalfahal         ###   ########.fr       */
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
