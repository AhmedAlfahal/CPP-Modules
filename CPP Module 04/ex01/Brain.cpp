/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 22:23:10 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/13 22:06:19 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain( const Brain &aBrain ){
	std::cout << "Brain Copy Constructor" << std::endl;
	if (this == &aBrain)	
		return ;
	*this = aBrain;
}

Brain::~Brain(){
	std::cout << "Brain Deconstructor" << std::endl;
}

Brain & Brain::operator= ( const Brain &aBrain ){
	std::cout << "Brain Copy Assignment Constructor" << std::endl;
	if (this == &aBrain)	
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = aBrain.ideas[i];
	return (*this);
}
