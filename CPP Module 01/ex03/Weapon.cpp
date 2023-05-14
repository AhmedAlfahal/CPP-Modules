/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:25:20 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/13 18:23:19 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::Weapon( std::string aType ){
	type = aType;
}

Weapon::~Weapon(){
}

std::string	Weapon::getType(){
	return (type);
}

void		Weapon::setType( std::string aType ){
	type = aType;
}