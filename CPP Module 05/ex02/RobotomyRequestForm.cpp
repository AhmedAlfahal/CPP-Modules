/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:24:44 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/12 17:25:27 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm ( std::string aTarget ) : AForm("RobotomyRequestForm", 72, 45){
	this->target = aTarget;
}

RobotomyRequestForm::RobotomyRequestForm ( const RobotomyRequestForm & aRobotomyRequestForm ){
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
