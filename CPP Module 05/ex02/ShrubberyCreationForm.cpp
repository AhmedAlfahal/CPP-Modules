/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:24:47 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/12 18:26:25 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm ( std::string aTarget ) : AForm("ShrubberyCreationForm", 145, 137){
	this->target = aTarget;
}

ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm & aShrubberyCreationForm ){
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

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	std::ifstream myFile;
	myFile.open(this->getTarget() + "_shrubbery");
	if (myFile.is_open() == false)
	{
		std::cout << this->getTarget() + "_shrubbery :cannot be created" << std::endl;
		return ;
	}
	if (myFile.good())
	{
		myFile << "ascii tree" << std::endl;
	}
}