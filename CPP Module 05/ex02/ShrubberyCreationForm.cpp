/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:24:47 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/14 16:18:25 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm ( std::string aTarget ) : AForm("ShrubberyCreationForm", 145, 137) {
	this->target = aTarget;
}

ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm & aShrubberyCreationForm ) : AForm("ShrubberyCreationForm", 145, 137) {
	if (this == &aShrubberyCreationForm)
		return ;
	*this = aShrubberyCreationForm;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator= ( const ShrubberyCreationForm & aShrubberyCreationForm ) {
	if (this == &aShrubberyCreationForm)
		return (*this);
	this->target = aShrubberyCreationForm.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm (){
}

std::string ShrubberyCreationForm::getTarget() const{
	return (this->target);
}

bool	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	try {
		if (this->getIsSigned() == false)
			throw (FormIsNotSigned());
		if (this->getSignGrade() >= 150 - executor.getGrade())
			throw (GradeTooHighException());
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		return (false);
	}
	std::string myFile = this->getTarget() + "_shrubbery";
	std::ofstream outfile (myFile.c_str());
	if (outfile.is_open() == false)
	{
		std::cout << myFile + ":cannot be created" << std::endl;
		return (false);
	}
	if (outfile.good())
	{
		outfile << "ascii tree" << std::endl;
	}
	return (true);
}