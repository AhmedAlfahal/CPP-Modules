/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:27:17 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/03 10:39:40 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal( const Animal &aAnimal );
		virtual ~Animal();
		Animal & operator= ( const Animal &aAnimal );
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif