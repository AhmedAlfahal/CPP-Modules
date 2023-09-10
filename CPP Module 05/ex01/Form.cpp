/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:48:57 by aalfahal          #+#    #+#             */
/*   Updated: 2023/09/02 20:03:50 by aalfahal         ###   ########.fr       */
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

Form::Form( std::string aName, int aGrade ) : name(aName), signGrade(aGrade), execGrade(0){
	this->isSigned = false;
	this->signedBurru = "NONE";
	this->err = 0;
	try {
		if (this->getSignGrade() > 150)
			throw GradeTooLowException();
		else if (this->getSignGrade() < 0)
			throw GradeTooHighException();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		err = 1;
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
	this->signedBurru = "NONE";
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
		err = 1;
	}
	return (*this);
}

Form::~Form(){
}

std::string Form::getFormName() const {
	return (this->name);
}

std::string Form::getSignedBurru() const {
	return (this->signedBurru);
}

bool Form::getIsSigned() const {
	return (this->isSigned);
}

int Form::getSignGrade() const {
	return (this->signGrade);
}

int Form::getExecGrade() const {
	return (this->execGrade);
}

int Form::getError() const {
	return (this->err);
}

void Form::signForm() const {
	if (this->getIsSigned())
		std::cout << this->getSignedBurru() << " Signed " << this->getFormName() << std::endl;
}

std::ostream & operator<< ( std::ostream &out, const Form &aForm ){
	if (aForm.getError())
		return (out);
	else
		out << aForm.getFormName() << " Form grade " << aForm.getSignGrade();
	return (out);
}
