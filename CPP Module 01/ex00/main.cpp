/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:44:44 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/12 16:08:27 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "Zombie.hpp"

int main(void)
{
	Zombie *z;
	
	randomChump("Ahmed");
	randomChump("Nadir");
	randomChump("Alfahal");
	z = newZombie("IIIIII");
	z->announce();
	delete(z);
}