/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:27:23 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/02 22:53:21 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
Dog::Dog(){
	std::cout << "Dog Default Constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog &aDog) : Animal(aDog){
	std::cout << "Dog Copy Constructor" << std::endl;
	if (this == &aDog)
		return ;
	*this = aDog;	
}

Dog::~Dog(){
	std::cout << "Dog Deconstructor" << std::endl;
}

Dog & Dog::operator= ( const Dog &aDog ){
	std::cout << "Dog Copy Assignment Constructor" << std::endl;
	if (this == &aDog)
		return (*this);
	this->type = aDog.type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "WOAF WOAF WOAF WOAF WOAF WOAF" << std::endl;
}
