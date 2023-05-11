/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:47:55 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/04 20:40:26 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

std::string     upping(std::string s)
{
	for(int i = 0; i < (int)s.length(); i++)
		s[i] = std::toupper(s[i]);
	return (s);
}

int     main(int ac, char **av)
{
	if (ac == 1)
	        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(int i = 1; i < ac; i++)
	        std::cout << upping(av[i]);
	std::cout << std::endl;	
}
