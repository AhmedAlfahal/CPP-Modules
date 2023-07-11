/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:27:23 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/11 20:48:30 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Brain.hpp"

Dog::Dog(){
	std::cout << "Dog Default Constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog &aDog) : Animal(aDog){
	std::cout << "Dog Copy Constructor" << std::endl;
	if (this == &aDog)
		return ;
	this->type = aDog.type;
	this->brain = new Brain(*aDog.brain);
}

Dog::~Dog(){
	std::cout << "Dog Deconstructor" << std::endl;
	delete this->brain;
}

Dog & Dog::operator= ( const Dog &aDog ){
	std::cout << "Dog Copy Assignment Constructor" << std::endl;
	if (this == &aDog)
		return (*this);
	this->type = aDog.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*aDog.brain);
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "WOAF WOAF WOAF WOAF WOAF WOAF" << std::endl;
}
