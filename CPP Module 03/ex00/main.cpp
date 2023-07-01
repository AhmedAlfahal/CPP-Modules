/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:58:37 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/01 18:21:59 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ClapTrap.hpp"

int main ( void )
{
	ClapTrap c("HEHEHEHEHE");
	ClapTrap b(c);
	ClapTrap a("Ahmed");

	std::cout << "-----------------------------------------------------------------" << std::endl;
	a.attack("Nothing");
	b.attack("Nothing");
	c.attack("Nothing");
	std::cout << "-----------------------------------------------------------------" << std::endl;
    a.takeDamage(10);
    b.takeDamage(10);
    c.takeDamage(10);
	a.beRepaired(20);
	b.beRepaired(20);
	c.beRepaired(20);
	std::cout << "-----------------------------------------------------------------" << std::endl;
	return (0);
}