/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:58:41 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/27 16:29:47 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ClapTrap.hpp"

ClapTrap::ClapTrap( ){
	std::cout << "ClapTrap Defualt Constructor Called" << std::endl;
	this->name = "ClapTrack";
	HitPoints = 10;
	EnergyPoint = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap( std::string aName ){
	std::cout << "ClapTrap Naming Constructor Called" << std::endl;
	this->name = aName;
	HitPoints = 10;
	EnergyPoint = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &aClapTrap ){
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	*this = aClapTrap;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor Called" << std::endl;
}

ClapTrap & ClapTrap::operator= ( const ClapTrap &aClapTrap ){
	std::cout << "ClapTrap Copy Assignment Called" << std::endl;
	this->name = aClapTrap.name;
	this->HitPoints = aClapTrap.HitPoints;
	this->EnergyPoint = aClapTrap.EnergyPoint;
	this->AttackDamage = aClapTrap.AttackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target){
	if (this->HitPoints == 0 || this->EnergyPoint == 0)
		return ;
	this->EnergyPoint--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	takeDamage(this->AttackDamage);
}

void ClapTrap::takeDamage(unsigned int amount){
	int tmp = this->HitPoints;
	this->HitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " had " << tmp 
	<< " Hit Points and now is having " << this->HitPoints << " after losing " << amount << " Hit Point" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->HitPoints == 0 || this->EnergyPoint == 0)
		return ;
	this->EnergyPoint--;
	this->HitPoints += amount;
	std::cout << "ClapTrap " << this->name << " has repaired himself with " << amount << " points" << std::endl;
	
}