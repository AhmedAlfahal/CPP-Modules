/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:18:39 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/07 22:47:21 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"AMateria.hpp"

AMateria::AMateria(){
	this->type = "";
}

AMateria::AMateria(std::string const & type){
	this->type = type;
}

AMateria::AMateria( const AMateria &aAMateria ){
	if (this == &aAMateria)
		return ;
	*this = aAMateria;
}
AMateria::~AMateria(){
}

AMateria & AMateria::operator=( const AMateria &aAMateria){
	if (this == &aAMateria)
		return (*this);
	this->type = aAMateria.type;
	return (*this);
}

std::string const & AMateria::getType() const{
	return (this->type);
}

std::string const & AMateria::getName() const{
	return (this->name);
}

void AMateria::equip(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (this->inventory[i] == NULL)
			this->inventory[i] = m;
	}
}

void AMateria::unequip(int idx){
	for (int i = 0; i < 4; i++){
		if (i == idx)
			this->inventory[i] = NULL;
	}
}

void AMateria::use(int idx, ICharacter& target){
	for (int i = 0; i < 4; i++){
		// if (i == idx)
			// use(target);
	}
	(void)target;
	(void)idx;
}

void AMateria::learnMateria(AMateria*){

}

AMateria* AMateria::createMateria(std::string const & type){
	(void)type;
	return (this);
}
