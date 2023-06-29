/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:59:23 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/29 23:37:52 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	this->name = "DiamondTrack";
	ClapTrap::name = this->name + "_clap_name";
	ClapTrap::HitPoints = FragTrap::HitPoints;
	ClapTrap::EnergyPoint = ScavTrap::EnergyPoint;
	ClapTrap::AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap Defualt Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &aDiamondTrap ){
	*this = aDiamondTrap;
	std::cout << "DiamondTrap Copy Assignment Called" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string &aName ){
	this->name = aName;
	ClapTrap::name = this->name + "_clap_name";
	ClapTrap::HitPoints = FragTrap::HitPoints;
	ClapTrap::EnergyPoint = ScavTrap::EnergyPoint;
	ClapTrap::AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap Naming Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap deconstructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator= ( const DiamondTrap &aDiamondTrap ){
	ClapTrap::HitPoints = aDiamondTrap.FragTrap::HitPoints;
	ClapTrap::EnergyPoint = aDiamondTrap.ScavTrap::EnergyPoint;
	ClapTrap::AttackDamage = aDiamondTrap.FragTrap::AttackDamage;
	return (*this);
}

void DiamondTrap::whoAmI(){
	std::cout << "my name is " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
