/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:33:58 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/17 14:52:42 by aalfahal         ###   ########.fr       */
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

const char* Intern::FormCouldNotBeCreated::what() const throw(){
	return ("Intern::FormCouldNotBeCreated");
}

AForm *Intern::makeForm( std::string aForm, std::string aTarget ){
	int index = -1;
	AForm *newForm;
	AForm* ( Intern :: *p[3] ) ( std::string ) = { &Intern::RobotomyRequest, &Intern::ShrubberyCreation, &Intern::PresidentialPardon };
	std::string forms[3] = { "robotomy request", "shrubbery creation", "presidential pardon" };
	for (size_t i = 0; i < 3; i++)
	{
		if (aForm == forms[i])
			index = i;
	}
	try {
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
		default: 
			std::cout << aForm + " does not exist" << std::endl;
			throw ( Intern::FormCouldNotBeCreated() );
		}
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	
	return (newForm);
}