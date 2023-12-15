/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:33:58 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/15 14:44:56 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(){
}

Intern::Intern( const Intern & aIntern){
	if (this == &aIntern)
		return ;
	*this = aIntern;	
}

Intern & Intern::operator= ( const Intern &aIntern ){
	if (this == &aIntern)
		return (*this);
	return (*this);
}

Intern::~Intern(){
}

AForm *Intern::RobotomyRequest( std::string aTarget ){
	return (new RobotomyRequestForm( aTarget ));
}

AForm *Intern::ShrubberyCreation( std::string aTarget ){
	return (new ShrubberyCreationForm( aTarget ));
}

AForm *Intern::PresidentialPardon( std::string aTarget ){
	return (new PresidentialPardonForm( aTarget ));
}


AForm *Intern::makeForm( std::string aForm, std::string aTarget ){
	int index = 0;
	AForm *newForm = NULL;
	if (aForm.empty())
		return (NULL);
	AForm* ( Intern :: *p[3] ) ( std::string ) = { &Intern::RobotomyRequest, &Intern::ShrubberyCreation, &Intern::PresidentialPardon };
	std::string forms[3] = { "robotomy request", "shrubbery creation", "presidential pardon" };
	for (size_t i = 0; i < forms->size(); i++)
	{
		if (aForm == forms[i])
			index = i;
	}
		switch (index){
		case 0:
			newForm = (this->*(p[index]))(aTarget);
			std::cout << "Intern creates " +  aForm<< std::endl;
			break;
		case 1:
			newForm = (this->*(p[index]))(aTarget);
			std::cout << "Intern creates " +  aForm<< std::endl;
			break;
		case 2:
			newForm = (this->*(p[index]))(aTarget);
			std::cout << "Intern creates " +  aForm<< std::endl;
			break;
		default: std::cout << aForm + " does not exist" << std::endl;
	}
	return (newForm);
}