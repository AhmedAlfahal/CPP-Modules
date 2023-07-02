/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:27:19 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/02 22:52:51 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(){
	std::cout << "Cat Default Constructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat &aCat ) : Animal(aCat){
	std::cout << "Cat Copy Constructor" << std::endl;
	if (this == &aCat)
		return ;
	*this = aCat;
}

Cat::~Cat(){
	std::cout << "Cat Deconstructor" << std::endl;	
}

Cat & Cat::operator= ( const Cat &aCat ){
	std::cout << "Cat Copy Assignment Constructor" << std::endl;
	if (this == &aCat)
		return (*this);
	this->type = aCat.type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Mewo Mewo Mewo Mewo Mewo Mewo" << std::endl;	
}
