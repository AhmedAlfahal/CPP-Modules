/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:58:37 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/29 23:45:53 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"DiamondTrap.hpp"

int main ( void )
{
	DiamondTrap a("Ahmed");
	DiamondTrap b(a);

	a.whoAmI();
	b.whoAmI();
	return (0);
}