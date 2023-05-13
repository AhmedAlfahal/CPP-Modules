/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:53:14 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/12 18:56:42 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	name = "";
}

Zombie::~Zombie()
{
	std::cout << name << " is died" << std::endl;
}

std::string Zombie::getName()
{
	return (name);	
}

void	Zombie::setName(std::string aName)
{
	name = aName;
}

void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
} 