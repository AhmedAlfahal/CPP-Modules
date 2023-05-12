/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:12:26 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/12 19:09:06 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0)
		return (NULL);
	Zombie *z = new Zombie[N];
	for (int i = 0; i < N; i++)
		z[i].setName(name);
	return (z);
}