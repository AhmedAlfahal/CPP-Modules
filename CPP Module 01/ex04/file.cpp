/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:55:21 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/12 18:18:24 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

std::string	replaceWords(std::string line, std::string oldWord, std::string newWord)
{
	std::istringstream l(line);
	std::string word;
	std::string newLine;
	std::string returnLine;
	char *rl;
	while (l >> word)
	{
		if (word == oldWord)
			newLine = newLine + newWord + " ";
		else
			newLine = newLine + word + " ";
	}
	rl = (char *)newLine.c_str();
	rl[newLine.length() - 1] = 0;
	returnLine = rl;
	return (returnLine);
}

bool	replcaingFile(char **av)
{
	std::string newFile(av[1]);
	newFile = newFile + ".replace";
	std::string s;
	std::ifstream myFile;
	myFile.open(av[1]);
	if (myFile.is_open() == false)
	{
		std::cout << av[1] << " :cannot be accessed" << std::endl;
		return (false);
	}
	std::ofstream outfile (newFile.c_str());
	while (myFile.good())
	{
		std::getline(myFile, s);
		outfile << replaceWords(s, av[2], av[3]) << std::endl;	
	}
	return (true);
}