/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:48:57 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/17 12:52:23 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

const char *Form::GradeTooHighException::what() const throw(){
	return ("Form::GradeTooHighException");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("Form::GradeTooLowException");
}

Form::Form() : name("Default"), signGrade(0), execGrade(0){
	this->isSigned = false;
	this->signedBureaucrat = "he did had the chance!!!!!";
	this->signedBureaucratName = "NONE";
}

Form::Form( std::string aName, int reqSign, int reqExec) : name(aName), signGrade(reqSign), execGrade(reqExec){
	this->isSigned = false;
	this->signedBureaucrat = "he did had the chance!!!!!";
	this->signedBureaucratName = "NONE";
	this->error = 0;
	try {
		if (this->getSignGrade() > 150 || this->getExecGrade() > 150)
			throw (Form::GradeTooLowException());
		else if (this->getSignGrade() < 1 || this->getExecGrade() < 1)
			throw (Form::GradeTooHighException());
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		this->error = 1;
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
	this->signedBureaucrat = "he did had the chance!!!!!";
	this->signedBureaucratName = "NONE";
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
		if (this->getSignGrade() > 150 || this->getExecGrade() > 150)
			throw (Form::GradeTooLowException());
		else if (this->getSignGrade() < 1 || this->getExecGrade() < 1)
			throw (Form::GradeTooHighException());
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		this->error = 1;
	}
	return (*this);
}

Form::~Form(){
}

std::string Form::getFormName() const {
	return (this->name);
}

std::string Form::getSignedBureaucrat() const {
	return (this->signedBureaucrat);
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
	return (this->error);
}

std::ostream & operator<< ( std::ostream &out, const Form &aForm ){
	if (aForm.getError())
		return (out);
	else
	{
		out << aForm.getFormName();
		if (aForm.getIsSigned() == 1)
			out << " it is signed";
		else if (aForm.getIsSigned() == 0)
			out << " it is not signed";
		out << " a Bureaucrat must have " << aForm.getSignGrade() << " to sign it";
		out << " and " << aForm.getExecGrade() << " to execute it";
	}
	return (out);
}

void Form::beSigned( Bureaucrat & aBureaucrat ) {
	if (this->getIsSigned() == true)
	{
		std::cout << this->name + " is already signed by " + this->getSignedBureaucratName() << std::endl;
		return ;
	}
	try {
		if (this->getSignGrade() >= 150 - aBureaucrat.getGrade())
			throw (Form::GradeTooLowException());
		for (int i = 0; i < this->getSignGrade(); i++)
			aBureaucrat.decrementGrade();
		this->signedBureaucratName = aBureaucrat.getName();
		this->signedBureaucrat = aBureaucrat.getName() + " signed " + this->name;
		this->isSigned = true;
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		this->signedBureaucrat = aBureaucrat.getName() + " couldn’t sign " + this->name + " because " + e.what();
	}
}

std::string Form::getSignedBureaucratName() const {
	return (this->signedBureaucratName);
}
