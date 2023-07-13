/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 00:00:43 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/13 21:12:37 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void ){
	const Animal* meta[100];
	for (int i = 0; i < 100; i++){
		if (i < 50)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	for (int i = 0; i < 100; i++){
		std::cout << meta[i]->getType() << std::endl;
		meta[i]->makeSound();
	}
	for (int i = 0; i < 100; i++)
		delete meta[i];
	Dog *d = new Dog();
	Dog *k = new Dog();
	*k = *d;
	k->makeSound();
	delete d;
	delete k;
	return (0);
}