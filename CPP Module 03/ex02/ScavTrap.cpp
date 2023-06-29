/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:12:40 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/27 16:41:58 by aalfahal         ###   ########.fr       */
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

ScavTrap::ScavTrap( const ScavTrap &aScavTrap ){
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
	std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode." << std::endl;
}