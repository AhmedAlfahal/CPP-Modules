/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:24:44 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/14 15:49:48 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm ( std::string aTarget ) : AForm("PresidentialPardonForm", 25, 5) {
	this->target = aTarget;
}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm & aPresidentialPardonForm ) : AForm("PresidentialPardonForm", 25, 5) {
	if (this == &aPresidentialPardonForm)
		return ;
	*this = aPresidentialPardonForm;
}

PresidentialPardonForm & PresidentialPardonForm::operator= ( const PresidentialPardonForm & aPresidentialPardonForm ) {
	if (this == &aPresidentialPardonForm)
		return (*this);
	this->target = aPresidentialPardonForm.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm (){
}

std::string PresidentialPardonForm::getTarget() const{
	return (this->target);
}

bool	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
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
	std::cout << this->getTarget() + " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return (true);
}