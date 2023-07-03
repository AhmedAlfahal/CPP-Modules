/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 22:23:10 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/02 23:03:00 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
}

Brain::Brain( const Brain &aBrain ){
	if (this == &aBrain)	
		return ;
	*this = aBrain;
}

Brain::~Brain(){
}

Brain & Brain::operator= ( const Brain &aBrain ){
	if (this == &aBrain)	
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = aBrain.ideas[i];
	return (*this);
}
