/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:58:37 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/27 16:37:21 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ClapTrap.hpp"

int main ( void )
{
	ClapTrap c("HEHEHEHEHE");
	ClapTrap b(c);
	ClapTrap a;

	a = b;
	a.attack("Nothing");
    a.takeDamage(10);
    a.attack("Ahmeed");
	b.attack("Ahmed");
	c.attack("Ahmed");
	b.beRepaired(20);
	return (0);
}