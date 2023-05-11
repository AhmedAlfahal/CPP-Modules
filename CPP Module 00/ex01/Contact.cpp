/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:55:25 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/06 13:51:47 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Contact.hpp"
# include<iostream>

void	Contact::setFirstName(std::string aFirstName)
{
	FirstName = aFirstName;
}

std::string	Contact::getFirstName()
{
	return (FirstName);
}

void	Contact::setLastName(std::string aLastName)
{
	LastName = aLastName;
}

std::string	Contact::getLastName()
{
	return (LastName);
}

void	Contact::setNickanme(std::string aNickname)
{
	Nickname = aNickname;
}

std::string	Contact::getNickanme()
{
	return (Nickname);
}
void	Contact::setDarkestSecret(std::string aDarkestSecret)
{
	DarkestSecret = aDarkestSecret;
}

std::string	Contact::getDarkestSecret()
{
	return (DarkestSecret);
}

std::string	Contact::getPhoneNumber()
{
	return (PhoneNumber);
}

void	Contact::setPhoneNumber(std::string aPhoneNumber)
{
	PhoneNumber = aPhoneNumber;
}
