/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:55:52 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/12 19:09:39 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	Zombie *z;
	int N = 2147483;
	z = zombieHorde(N, "Ahmed");
	for (int i = 0; i < N; i++)
		z[i].announce();
	delete[] z;
}