/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:27:19 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/02 22:54:40 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat Default Constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &WrongaCat ) : WrongAnimal(WrongaCat){
	std::cout << "WrongCat Copy Constructor" << std::endl;
	if (this == &WrongaCat)
		return ;
	*this = WrongaCat;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Deconstructor" << std::endl;	
}

WrongCat & WrongCat::operator= ( const WrongCat &WrongaCat ){
	std::cout << "WrongCat Copy Assignment Constructor" << std::endl;
	if (this == &WrongaCat)
		return (*this);
	this->type = WrongaCat.type;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Mewo Mewo Mewo Mewo Mewo Mewo" << std::endl;	
}
