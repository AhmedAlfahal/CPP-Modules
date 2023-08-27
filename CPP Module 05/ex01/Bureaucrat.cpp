/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 02:22:48 by aalfahal          #+#    #+#             */
/*   Updated: 2023/08/27 22:39:58 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"){
	this->grade = 2;
	this->err = 0;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Bureaucrat::GradeTooHighException");;
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
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
	this->err = 0;
	try {
		if (this->grade > 150)
			throw GradeTooLowException();
		else if (this->grade < 0)
			throw GradeTooHighException();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		this->err = 1;
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
	this->err = 0;
	try {
		if (this->grade > 150)
			throw GradeTooLowException();
		else if (this->grade < 0)
			throw GradeTooHighException();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		this->err = 1;
	}
}

Bureaucrat::~Bureaucrat(){
}

const int	Bureaucrat::getError() const {
	return (this->err);	
}

const std::string Bureaucrat::getName() const {
	return (this->name);
}

const int Bureaucrat::getGrade() const {
	return (this->grade);
}

std::ostream & operator<< ( std::ostream &out, const Bureaucrat &aBureaucrat ){
	if (aBureaucrat.getError())
		return (out);
	else
		out << aBureaucrat.getName() << " bureaucrat grade " << aBureaucrat.getGrade();
	return (out);
}