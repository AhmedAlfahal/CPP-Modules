/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:43:06 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/04 20:15:13 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}
void Harl::info( void )
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
	std::cout << "[ERROR]\nThis is unacceptable!\nI want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl :: *p[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int l = 0;
	for (size_t i = 0; i < levels->size(); i++)
		if (level == levels[i])
			l = ++i;
	switch (l){
		case 1:
			(this->*(p[l - 1]))();
			(this->*(p[l]))();
			(this->*(p[l + 1]))();
			(this->*(p[l + 2]))();
			break;
		case 2:
			(this->*(p[l - 1]))();
			(this->*(p[l]))();
			(this->*(p[l + 1]))();
			break;
		case 3:
			(this->*(p[l - 1]))();
			(this->*(p[l]))();
			break;
		case 4: 
			(this->*(p[l - 1]))();
			break;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
