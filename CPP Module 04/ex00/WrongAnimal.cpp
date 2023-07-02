/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:27:13 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/02 22:54:13 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal Default Constructor" << std::endl;
	this->type = "";
}

WrongAnimal::WrongAnimal( const WrongAnimal &WrongaAnimal ){
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	if (this == &WrongaAnimal)
		return ;
	*this = WrongaAnimal;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Deconstructor" << std::endl;
}

WrongAnimal & WrongAnimal::operator= ( const WrongAnimal &WrongaAnimal ){
	std::cout << "WrongAnimal Copy Assignment Constructor" << std::endl;
	if (this == &WrongaAnimal)
		return (*this);
	this->type = WrongaAnimal.type;
	return (*this);
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (this->type);
}