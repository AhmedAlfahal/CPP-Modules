/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:41:17 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/04 20:08:40 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int ac, char **av )
{
	Harl h;
	if (ac > 1)
		h.complain(av[1]);
	else
		h.complain("A");
	return (0);
}