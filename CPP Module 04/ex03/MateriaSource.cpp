/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:26:52 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/12 00:38:56 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(){
	this->name = "Defualt";
	for (int i = 0; i < 4; i++){
		this->memory[i] = NULL;
	}
}

MateriaSource::MateriaSource( const std::string name ){
	this->name = name;
	for (int i = 0; i < 4; i++){
		this->memory[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource &aMateriaSource ){
	if (this == &aMateriaSource)
		return ;
	this->name = aMateriaSource.name;
	for (int i = 0; i < 4; i++){
		if (this->memory[i] == NULL)
			this->memory[i] = aMateriaSource.memory[i]->clone();
		else
		 	this->memory[i] = NULL;
	}
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		if (this->memory[i])
			delete this->memory[i];
	}
}

MateriaSource & MateriaSource::operator= ( const MateriaSource &aMateriaSource ){
	if (this == &aMateriaSource)
		return (*this);
	this->name = aMateriaSource.name;
	for (int i = 0; i < 4; i++){
		if(aMateriaSource.memory[i])
			this->memory[i] = aMateriaSource.memory[i]->clone();
		else
		 	this->memory[i] = NULL;
	}
	return (*this);
	
}

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (this->memory[i] == NULL)
			this->memory[i] = m->clone();
	}
	delete m;
}

AMateria* MateriaSource::createMateria( std::string const & type ){
	if (type == "")
		return (NULL);
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
	 	return (new Cure());
	else
		return (NULL);
}
