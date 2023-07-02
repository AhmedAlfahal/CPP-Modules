/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:27:13 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/02 22:52:07 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Animal.hpp"

Animal::Animal(){
	std::cout << "Animal Default Constructor" << std::endl;
	this->type = "";
}

Animal::Animal( const Animal &aAnimal ){
	std::cout << "Animal Copy Constructor" << std::endl;
	if (this == &aAnimal)
		return ;
	*this = aAnimal;
}

Animal::~Animal(){
	std::cout << "Animal Deconstructor" << std::endl;
}

Animal & Animal::operator= ( const Animal &aAnimal ){
	std::cout << "Animal Copy Assignment Constructor" << std::endl;
	if (this == &aAnimal)
		return (*this);
	this->type = aAnimal.type;
	return (*this);
}

void Animal::makeSound() const{
}

std::string Animal::getType() const {
	return (this->type);
}