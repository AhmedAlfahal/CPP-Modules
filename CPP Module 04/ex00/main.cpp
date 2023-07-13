/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 00:00:43 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/13 21:47:38 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main( void ){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	WrongAnimal* k = new WrongCat();
	WrongAnimal* d = new WrongCat();
	*d = *k;
	k->getType();
	delete k;
	delete d;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();
	delete meta;
	delete i;
	delete j;
	delete k;
	return 0;
}