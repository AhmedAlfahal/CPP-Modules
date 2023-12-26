/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:49:45 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/26 20:15:18 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>


void	chnageITs(std::string & a)
{
	a = "69";
}

void	chnageITi(int & a)
{
	a = 69;
}

int main ()
{
	std::string test1[10];
	int test2[10];
	std::cout << "-------------------------------------" << std::endl;
	fill(test1, 10, std::string("Hello"));
	print(test1, 10);
	iter(test1, 10, chnageITs);
	print(test1, 10);
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	fill(test2, 10, 251);
	print(test2, 10);
	iter(test2, 10, chnageITi);
	print(test2, 10);
	std::cout << "-------------------------------------" << std::endl;
}