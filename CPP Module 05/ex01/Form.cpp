/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:48:57 by aalfahal          #+#    #+#             */
/*   Updated: 2023/08/27 22:49:07 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw(){
	return ("Form::GradeTooHighException");;
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("Form::GradeTooLowException");
}

Form::Form() : name("Default"), signGrade(0), execGrade(0){
	this->isSigned = false;
}

Form::Form( std::string aName, int aGrade ) : name(aName), signGrade(0), execGrade(0){
	this->isSigned = false;
	try {
		if (this->getSignGrade() > 150)
			throw GradeTooLowException();
		else if (this->getSignGrade() < 0)
			throw GradeTooHighException();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
}

Form::Form( const Form & aForm ) : name(aForm.getFormName()), signGrade(aForm.getSignGrade()), execGrade(aForm.getExecGrade()){
	if (this == &aForm)
		return ;
	*this = aForm;
}

Form & Form::operator= ( const Form & aForm ){
	if (this == &aForm)
		return (*this);
	if (this->name != aForm.getFormName())
	{
		std::string* tmp = const_cast <std::string *> (&this->name);
		*tmp = aForm.getFormName();
	}
	if (this->signGrade != aForm.getSignGrade())
	{
		int* tmp = const_cast <int *> (&this->signGrade);
		*tmp = aForm.signGrade;
	}
	if (this->execGrade != aForm.getExecGrade())
	{
		int* tmp = const_cast <int *> (&this->execGrade);
		*tmp = aForm.execGrade;
	}
	this->isSigned = aForm.getIsSigned();
	try {
		if (this->getSignGrade() > 150)
			throw GradeTooLowException();
		else if (this->getSignGrade() < 0)
			throw GradeTooHighException();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	return (*this);
}

Form::~Form(){
}

const std::string Form::getFormName() const {
	return (this->name);
}

const bool Form::getIsSigned() const {
	return (this->isSigned);
}

const int Form::getSignGrade() const {
	return (this->signGrade);
}

const int Form::getExecGrade() const {
	return (this->execGrade);
}

