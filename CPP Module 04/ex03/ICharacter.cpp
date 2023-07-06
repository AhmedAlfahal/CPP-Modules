/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:22:46 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/06 23:29:36 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter( std::string aName){
	this->name = aName;
}

ICharacter::ICharacter( const ICharacter &aICharacter){
	if (this == &aICharacter)
		return ;
	*this = aICharacter;
}

ICharacter & ICharacter::operator=( const ICharacter &aICharacter ){
	
}
