/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:58:37 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/01 19:37:49 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ScavTrap.hpp"

int main ( void )
{
	ScavTrap a("Nadir");
	ScavTrap b("a");
	ScavTrap c = a;

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
	a.guardGate();
    b.guardGate();
    c.guardGate();
	std::cout << "-----------------------------------------------------------------" << std::endl;
	a.beRepaired(20);
	b.beRepaired(20);
	c.beRepaired(20);
	std::cout << "-----------------------------------------------------------------" << std::endl;
	a.attack("Ahmed");
	return (0);
}