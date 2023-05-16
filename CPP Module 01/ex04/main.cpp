/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:11:49 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/16 07:42:05 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replaceWords(std::string line, std::string oldWord, std::string newWord)
{
	std::string newLine;
	for(size_t i = 0; i < line.length(); i++)
	{
		newLine[i] = line[i];
	}
	return (newLine);
}

bool	replcaingFile(char **av)
{
	std::string newFile(av[1]);
	newFile = newFile + ".replace";
	std::string s;
	std::ifstream myFile;
	myFile.open(av[1]);
	if (myFile.is_open() == false)
		return (false);
	std::ofstream outfile (newFile.c_str());
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