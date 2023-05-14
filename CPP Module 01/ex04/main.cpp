/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:11:49 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/14 16:02:10 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool	replcaingFile(char **av)
{
	std::string s;
	std::ifstream myFile; 
	myFile.open(av[1]);
	if (myFile.is_open() == false)
		return (false);
	std::ofstream outfile (".replace");
	while (myFile.good())
	{
		std::getline(myFile, s);
		outfile << s << std::endl;	
	}
	return (true);
}

int main(int ac, char **av)
{
	if (ac == 4)
		if (replcaingFile(av) == false)
			return (1);
	return (0);
}