/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:58:37 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/01 23:09:56 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"DiamondTrap.hpp"

int main ( void )
{
	DiamondTrap a("Nadir");
	DiamondTrap b("a");
	DiamondTrap c = a;

	std::cout << "-----------------------------------------------------------------" << std::endl;
	a.attack("Ahmed");
	a.attack("Ahmed");
	a.attack("Ahmed");
	a.attack("Ahmed");
	a.attack("Ahmed");
	a.attack("Ahmed");
	b.attack("Ahmed");
	c.attack("Ahmed");
	std::cout << "-----------------------------------------------------------------" << std::endl;
	a.highFivesGuys();
    b.highFivesGuys();
    c.highFivesGuys();
	std::cout << "-----------------------------------------------------------------" << std::endl;
	a.whoAmI();
    b.whoAmI();
    c.whoAmI();
	std::cout << "-----------------------------------------------------------------" << std::endl;
	a.guardGate();
    b.guardGate();
    c.guardGate();
	std::cout << "-----------------------------------------------------------------" << std::endl;
	a.beRepaired(20);
	b.beRepaired(20);
	c.beRepaired(20);
	std::cout << "-----------------------------------------------------------------" << std::endl;
	a.attack("Ahmed");
}