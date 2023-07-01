/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:58:37 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/01 22:59:46 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"FragTrap.hpp"

int main ( void )
{
	FragTrap a("Nadir");
	FragTrap b("a");
	FragTrap c = a;

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
	a.beRepaired(20);
	b.beRepaired(20);
	c.beRepaired(20);
	std::cout << "-----------------------------------------------------------------" << std::endl;
	a.attack("Ahmed");
	return (0);
}