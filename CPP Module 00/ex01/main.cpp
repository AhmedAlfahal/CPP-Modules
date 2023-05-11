/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:14:18 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/11 19:58:45 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string command;
	PhoneBook p;

	std::cout << std::endl;
	std::cout << "|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|" << std::endl;
	std::cout << "|----------|     Welcome to the Phone Book! |----------|" << std::endl;
	std::cout << "|----------|     ADD : to add a contact     |----------|" << std::endl;
	std::cout << "|----------|  SEARCH : to look for a contact|----------|" << std::endl;
	std::cout << "|----------|    EXIT : to exit the program  |----------|" << std::endl;
	std::cout << "|__________|__________|__________|__________|__________|" << std::endl;
	while (1)
	{
		std::cout << std::endl;
		std::cout << "ADD or SEARCH or EXIT : ";
		if (!getline(std::cin, command))
			return (1);
		else if (command == "EXIT")
			break ;
		else if (command == "ADD")
		{
			if (p.add() == false)
				return(1) ;
		}
		else if (command == "SEARCH")
		{
			if (p.search() == false)
				return (1) ;
		}
	}
	return (0);
}