/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:26:52 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/09 20:43:13 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(){
	this->name = "Defualt";
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
	
}

MateriaSource & MateriaSource::operator= ( const MateriaSource &aMateriaSource ){
	if (this == &aMateriaSource)
		return (*this);
	this->name = aMateriaSource.name;
	return (*this);
	
}

void MateriaSource::learnMateria(AMateria*){
	std::cout << "inside learn materia" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	std::cout << "inside create materia" << std::endl;
	if (type == "ice")
		return (new Ice());
	else
	 	return (new Cure());
}
