/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:26:52 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/11 20:51:28 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(){
	this->name = "Defualt";
	for (int i = 0; i < 4; i++){
		this->memory[i] = new Ice("null");
	}
}

MateriaSource::MateriaSource( const std::string name ){
	this->name = name;
}

MateriaSource::MateriaSource( const MateriaSource &aMateriaSource ){
	if (this == &aMateriaSource)
		return ;
	*this = aMateriaSource;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		delete this->memory[i];
	}
}

MateriaSource & MateriaSource::operator= ( const MateriaSource &aMateriaSource ){
	if (this == &aMateriaSource)
		return (*this);
	this->name = aMateriaSource.name;
	return (*this);
	
}

void MateriaSource::learnMateria(AMateria*){
	for (int i = 0; i < 4; i++){
		if (this->memory[i]->getType() == "null"){
			delete this->memory[i];
			this->memory[i] = new Cure("a");
		}
	}
}

AMateria* MateriaSource::createMateria( std::string const & type ){
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
	 	return (new Cure());
	else
		return (NULL);
}
