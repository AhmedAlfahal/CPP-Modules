/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:24:44 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/12 17:34:00 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm ( std::string aTarget ) : AForm("PresidentialPardonForm", 25, 5) {
	this->target = aTarget;
}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm & aPresidentialPardonForm ){
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
