/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 02:22:48 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/14 16:05:08 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.cpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"){
	this->grade = 2;
	this->error = 0;
}

const char *GradeTooHighException::what() const throw(){
	return ("Bureaucrat::GradeTooHighException");;
}

const char *GradeTooLowException::what() const throw(){
	return ("Bureaucrat::GradeTooLowException");
}

Bureaucrat & Bureaucrat::operator= ( const Bureaucrat &aBureaucrat ){
	if (this == &aBureaucrat)
		return (*this);
	this->grade = aBureaucrat.getGrade();
	if (this->name != aBureaucrat.getName())
	{
		std::string* tmp = const_cast <std::string *> (&this->name);
		*tmp = aBureaucrat.getName();
	}
	this->error = 0;
	try {
		if (this->grade > 150)
			throw GradeTooLowException();
		else if (this->grade < 1)
			throw GradeTooHighException();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		this->error = 1;
	}
	return (*this);
}

Bureaucrat::Bureaucrat( const Bureaucrat & aBureaucrat) : name(aBureaucrat.getName()){
	if (this == &aBureaucrat)
		return ;
	*this = aBureaucrat;
}

Bureaucrat::Bureaucrat( std::string aName, int aGrade ) : name(aName){
	this->grade = aGrade;
	this->error = 0;
	try {
		if (this->grade > 150)
			throw GradeTooLowException();
		else if (this->grade < 1)
			throw GradeTooHighException();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		this->error = 1;
	}
}

Bureaucrat::~Bureaucrat(){
}

int	Bureaucrat::getError() const {
	return (this->error);	
}

std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}

std::ostream & operator<< ( std::ostream &out, const Bureaucrat &aBureaucrat ){
	if (aBureaucrat.getError())
		return (out);
	else
		out << aBureaucrat.getName() << " bureaucrat grade " << aBureaucrat.getGrade();
	return (out);
}

void Bureaucrat::incrementGrade(){
	this->grade--;
	try {
		if (this->grade > 150)
			throw GradeTooLowException();
		else if (this->grade < 1)
			throw GradeTooHighException();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		this->error = 1;
	}
}

void Bureaucrat::decrementGrade(){
	this->grade++;
	try {
		if (this->grade > 150)
			throw GradeTooLowException();
		else if (this->grade < 1)
			throw GradeTooHighException();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		this->error = 1;
	}
}

void	Bureaucrat::signForm( const AForm & aForm ) {
	if ("he did had the chance!!!!!" == aForm.getSignedBureaucrat())
		std::cout << this->name << " couldn’t sign " << aForm.getAFormName() + " " + aForm.getSignedBureaucrat() << std::endl;
	else
		std::cout << aForm.getSignedBureaucrat() << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form){
	if (form.execute(*this) == false)
		std::cout << form.getAFormName() + " couldn't be executed" << std::endl;
	else
	{
		std::cout << this->getName() + " executed " + form.getAFormName() << std::endl;
		for (int i = 0; i < form.getSignGrade(); i++)
			this->decrementGrade();
	}
}
