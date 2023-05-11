/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:50:51 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/11 19:59:09 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include<string>

PhoneBook::PhoneBook()
{
	CurrentContactNumbers = 0;
	ContactCounter = 0;
}

PhoneBook::~PhoneBook(){
}

static int	validNumber(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
		if (isdigit(s[i]) == 0)
			return (false);
	return (true);
}

static std::string cleanWhiteSpaces(std::string old)
{
	size_t k = 0;
	for (size_t i = 0; i < old.length(); i++)
		if (old[i] == ' ' || (old[i] >= 9 && old[i] <= 13))
			k++;
	if (k == old.length())
		return ("");
	else
		return (old);
}

static std::string wrongNumber()
{
	std::string Number;

	std::cout << "Please enter a valid Number: ";
	if (!getline(std::cin, Number))
		return ("");
	Number = cleanWhiteSpaces(Number);
	if (validNumber(Number) == false || Number.empty())
		return (wrongNumber());
	std::cout << std::endl;
	return (Number);
}

static std::string emptyInput(std::string msg)
{
	std::string input;

	std::cout << "please Enter " << msg << " again:  ";
	if (!getline(std::cin, input))
		return ("");
	input = cleanWhiteSpaces(input);
	if (input.empty())
		return (emptyInput(msg));
	return (input);
	
}

bool	PhoneBook::add()
{
	std::string FirstName;
	std::string LastName;
	std::string Nickame;
	std::string DarkestSecret;
	std::string Number;
	
	if (ContactCounter == 8)
		ContactCounter = 0;
	std::cout << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "First Name:  ";
	if (!getline(std::cin, FirstName))
		return (false);
	FirstName = cleanWhiteSpaces(FirstName);
	if (FirstName.empty())
		FirstName = emptyInput("First Name");
	contact[ContactCounter].setFirstName(FirstName);
	std::cout << "Last Name:  ";
	if (!getline(std::cin, LastName))
		return (false);
	LastName = cleanWhiteSpaces(LastName);
	if (LastName.empty())
		LastName = emptyInput("Last Name");
	contact[ContactCounter].setLastName(LastName);
	std::cout << "Nickname:  ";
	Nickame = cleanWhiteSpaces(Nickame);
	if (!getline(std::cin, Nickame))
		return (false);
	if (Nickame.empty())
		Nickame = emptyInput("Nickame");
	contact[ContactCounter].setNickanme(Nickame);
	std::cout << "DarkestSecret:  ";
	if (!getline(std::cin, DarkestSecret))
		return (false);
	DarkestSecret = cleanWhiteSpaces(DarkestSecret);
	if (DarkestSecret.empty())
		DarkestSecret = emptyInput("Darkest Secret");
	contact[ContactCounter].setDarkestSecret(DarkestSecret);
	std::cout << "Phone Number:  ";
	if (!getline(std::cin, Number))
		return (false);
	Number = cleanWhiteSpaces(Number);
	if (validNumber(Number) == false || Number.empty())
		Number = wrongNumber();
	if (Number.empty())
		return (false);
	contact[ContactCounter].setPhoneNumber(Number);
	if (CurrentContactNumbers < 8)
		CurrentContactNumbers++;
	ContactCounter++;
	std::cout << "-------------------------------" << std::endl;
	return (true);
}

static void	cut_print(std::string s)
{
	if (s.length() > 9)
		std::cout << s.substr(0, 9) << ".|";
	else
	{
		std::cout.width(10);
		std::cout << s;
		std::cout << "|";
	}
}

static void	print_number(int n)
{
	std::cout << "|";
	std::cout.width(10);
	std::cout << n;
	std::cout << "|";
}

bool PhoneBook::fullInfo()
{
	int index = 0;
	std::string input;

	std::cout << std::endl;
	std::cout << "Select the index:  ";
	if (!getline(std::cin, input))
		return (false);
	if (validNumber(input) == false || input.empty())
		input = wrongNumber();
	if (input.empty())
		return (false);
	for (size_t i = 0; i < input.length(); i++)
        index = index * 10 + (input[i] - '0');
	if (index >= CurrentContactNumbers || index > 7 || index < 0)
	{
		std::cout << "Out of boundres Please try again" << std::endl;
		return (fullInfo());
	}
	std::cout << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "First Name: " << contact[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contact[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contact[index].getNickanme() << std::endl;
	std::cout << "DarkestSecret: " << contact[index].getDarkestSecret() << std::endl;
	std::cout << "Phone Number: "  << contact[index].getPhoneNumber() << std::endl;
	std::cout << "-------------------------------" << std::endl;
	return (true);
}

bool	PhoneBook::search()
{
	std::cout << std::endl;
	if (CurrentContactNumbers == 0)
	{
		std::cout << "Yout PhoneBook is empty" << std::endl;
		return (true);
	}
	std::cout << "|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|" << std::endl;
	std::cout << "|   Index  |First Name| Last Name| Nickname |  Number  |" << std::endl;
	std::cout << "|__________|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < CurrentContactNumbers; i++){
		print_number(i);
		cut_print(contact[i].getFirstName());
		cut_print(contact[i].getLastName());
		cut_print(contact[i].getNickanme());
		cut_print(contact[i].getPhoneNumber());
		std::cout << std::endl;
	}
	std::cout << "|__________|__________|__________|__________|__________|" << std::endl;
	if (fullInfo() == false)
		return (false);
	return (true);
}