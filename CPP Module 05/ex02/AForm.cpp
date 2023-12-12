/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:48:57 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/09 00:39:18 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

const char *AForm::GradeTooHighException::what() const throw(){
	return ("AForm::GradeTooHighException");;
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("AForm::GradeTooLowException");
}

AForm::AForm() : name("Default"), signGrade(0), execGrade(0){
	this->isSigned = false;
	this->signedBureaucrat = "he did had the chance!!!!!";
	this->signedBureaucratName = "NONE";
}

AForm::AForm( std::string aName, int reqSign, int reqExec) : name(aName), signGrade(reqSign), execGrade(reqExec){
	this->isSigned = false;
	this->signedBureaucrat = "he did had the chance!!!!!";
	this->signedBureaucratName = "NONE";
	this->error = 0;
	try {
		if (this->getSignGrade() > 150 || this->getExecGrade() > 150)
			throw GradeTooLowException();
		else if (this->getSignGrade() < 1 || this->getExecGrade() < 1)
			throw GradeTooHighException();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		this->error = 1;
	}
}

AForm::AForm( const AForm & aAForm ) : name(aAForm.getAFormName()), signGrade(aAForm.getSignGrade()), execGrade(aAForm.getExecGrade()){
	if (this == &aAForm)
		return ;
	*this = aAForm;
}

AForm & AForm::operator= ( const AForm & aAForm ){
	if (this == &aAForm)
		return (*this);
	this->signedBureaucrat = "he did had the chance!!!!!";
	this->signedBureaucratName = "NONE";
	if (this->name != aAForm.getAFormName())
	{
		std::string* tmp = const_cast <std::string *> (&this->name);
		*tmp = aAForm.getAFormName();
	}
	if (this->signGrade != aAForm.getSignGrade())
	{
		int* tmp = const_cast <int *> (&this->signGrade);
		*tmp = aAForm.signGrade;
	}
	if (this->execGrade != aAForm.getExecGrade())
	{
		int* tmp = const_cast <int *> (&this->execGrade);
		*tmp = aAForm.execGrade;
	}
	this->isSigned = aAForm.getIsSigned();
	try {
		if (this->getSignGrade() > 150 || this->getExecGrade() > 150)
			throw (GradeTooLowException());
		else if (this->getSignGrade() < 1 || this->getExecGrade() < 1)
			throw (GradeTooHighException());
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		this->error = 1;
	}
	return (*this);
}

AForm::~AForm(){
}

std::string AForm::getAFormName() const {
	return (this->name);
}

std::string AForm::getSignedBureaucrat() const {
	return (this->signedBureaucrat);
}

bool AForm::getIsSigned() const {
	return (this->isSigned);
}

int AForm::getSignGrade() const {
	return (this->signGrade);
}

int AForm::getExecGrade() const {
	return (this->execGrade);
}

int AForm::getError() const {
	return (this->error);
}

std::ostream & operator<< ( std::ostream &out, const AForm &aAForm ){
	if (aAForm.getError())
		return (out);
	else
	{
		out << aAForm.getAFormName();
		if (aAForm.getIsSigned() == 1)
			out << " it is signed";
		else if (aAForm.getIsSigned() == 0)
			out << " it is not signed";
		out << " a Bureaucrat must have " << aAForm.getSignGrade() << " to sign it";
		out << " and " << aAForm.getExecGrade() << " to execute it";
	}
	return (out);
}

void AForm::beSigned( Bureaucrat & aBureaucrat ) {
	if (this->getIsSigned() == true)
	{
		std::cout << this->name + " is already signed by " + this->getSignedBureaucratName() << std::endl;
		return ;
	}
	try {
		if (this->getSignGrade() >= 150 - aBureaucrat.getGrade())
			throw (GradeTooLowException());
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

std::string AForm::getSignedBureaucratName() const {
	return (this->signedBureaucratName);
}
