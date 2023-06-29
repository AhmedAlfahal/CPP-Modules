/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:59:23 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/29 23:14:58 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	this->name = "DiamondTrack";
	ClapTrap::name = this->name + "_clap_name";
	ClapTrap::HitPoints = FragTrap::HitPoints;
	ClapTrap::EnergyPoint = ScavTrap::EnergyPoint;
	std::cout << "DiamondTrap Defualt Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &aDiamondTrap ){
	std::cout << "Copy Assignment Called" << std::endl;
	*this = aDiamondTrap;
}

DiamondTrap::DiamondTrap( const std::string &aName ){
	this->name = aName;
}

DiamondTrap::~DiamondTrap(){
}

DiamondTrap & DiamondTrap::operator= ( const DiamondTrap &aDiamondTrap ){
	FragTrap::HitPoints = aDiamondTrap.FragTrap::HitPoints;
	return (*this);
}
