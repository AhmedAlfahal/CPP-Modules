/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:44:50 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/12 14:58:51 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void randomChump( std::string name )
{
	Zombie z;
	
	z.setName(name);
	z.announce();
}