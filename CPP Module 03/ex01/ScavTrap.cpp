/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:12:40 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/01 23:01:08 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap Defualt Constructor Called" << std::endl;
	this->name = "ScavTrack";
	HitPoints = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap( std::string aName ){
	std::cout << "ScavTrap Naming Constructor Called" << std::endl;
	this->name = aName;
	HitPoints = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &aScavTrap ) : ClapTrap(aScavTrap) {
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	*this = aScavTrap;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor Called" << std::endl;
}

ScavTrap & ScavTrap::operator= (const ScavTrap &aScavTrap){
	std::cout << "ScavTrap Copy Assignment Called" << std::endl;
	this->name = aScavTrap.name;
	this->HitPoints = aScavTrap.HitPoints;
	this->EnergyPoint = aScavTrap.EnergyPoint;
	this->AttackDamage = aScavTrap.AttackDamage;
	return (*this);
}

void ScavTrap::guardGate(){
	if (this->HitPoints <= 0){
		std::cout << "ScavTrap " << this->name << " is died!! he can not be in Gate Keeper mode" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (this->EnergyPoint == 0){
        std::cout << this->name << " has no energy points!!" << std::endl;
        return ;
    }
    else if (this->HitPoints == 0) {
        std::cout << this->name << " is died repair him !!!" << std::endl;
        return;
    }
    this->EnergyPoint--;
    std::cout << "ScavTrap " <<this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
    takeDamage(this->AttackDamage);
}