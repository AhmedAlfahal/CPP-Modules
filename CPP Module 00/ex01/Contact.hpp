/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:57:40 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/06 13:51:13 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string DarkestSecret;
		std::string	PhoneNumber;
	public:
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickanme();
		std::string	getDarkestSecret();
		std::string	getPhoneNumber();
		void	setFirstName(std::string aFirstName);
		void	setLastName(std::string aLastName);
		void	setNickanme(std::string aNickname);
		void	setDarkestSecret(std::string aDarkestSecret);
		void	setPhoneNumber(std::string aPhoneNumber);
		
};