/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:24:44 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/14 17:45:24 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm ( std::string aTarget ) : AForm("RobotomyRequestForm", 72, 45){
	this->target = aTarget;
}

 RobotomyRequestForm::RobotomyRequestForm ( const RobotomyRequestForm & aRobotomyRequestForm ) : AForm("RobotomyRequestForm", 72, 45){
	if (this == &aRobotomyRequestForm)
		return ;
	*this = aRobotomyRequestForm;
}

RobotomyRequestForm & RobotomyRequestForm::operator= ( const RobotomyRequestForm & aRobotomyRequestForm ) {
	if (this == &aRobotomyRequestForm)
		return (*this);
	this->target = aRobotomyRequestForm.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm (){
}

std::string RobotomyRequestForm::getTarget() const{
	return (this->target);
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	try {
		if (this->getIsSigned() == false)
			throw (FormIsNotSigned());
		if (this->getSignGrade() >= 150 - executor.getGrade())
			throw (GradeTooLowException());
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		return (false);
	}
	std::cout << this->getTarget() + " has been robotomized successfully 50% of the time." << std::endl;
	return (true);
}