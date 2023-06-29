/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:58:37 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/27 16:45:58 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ScavTrap.hpp"

int main ( void )
{
	ScavTrap a("Nadir");
	ScavTrap b(a);

	 a.guardGate();
	a.attack("Ahmed");
    a.guardGate();
	a.attack("Nothing");
	ScavTrap c = a;
	b.attack("Ahmed");
	 c.attack("Ahmed");
	 b.beRepaired(20);
	return (0);
}