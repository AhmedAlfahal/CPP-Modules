/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:51:23 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/01 22:56:23 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(){
    this->name = "FragTrack";
    this->HitPoints = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap Defualt Constuctor called" << std::endl;
}
FragTrap::FragTrap( std::string name ){
    this->name = name;
    this->HitPoints = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap naming Constructor called" << std::endl;
}
FragTrap::FragTrap( const FragTrap &aFragTrap ) : ClapTrap(aFragTrap){
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = aFragTrap;
}
FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}
FragTrap & FragTrap::operator= ( const FragTrap &aFragTrap ){
    this->name = aFragTrap.name;
    this->HitPoints = aFragTrap.HitPoints;
    this->EnergyPoint = aFragTrap.EnergyPoint;
    this->AttackDamage = aFragTrap.AttackDamage;
    std::cout << "FragTrap Copy Assignment Called" << std::endl;
    return (*this);
}
void FragTrap::highFivesGuys(void){
	if (this->HitPoints == 0){
		std::cout << this->name << " is died he can not high five" << std::endl;
		return ;
	}
    std::cout << "Can You High Five me !!!!!" << std::endl;
}