/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 02:22:48 by aalfahal          #+#    #+#             */
/*   Updated: 2023/08/27 02:08:24 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"){
	this->grade = 2;
	this->err = 0;
	this->isAlloc = 0;
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
	Bureaucrat *b = new Bureaucrat(aBureaucrat.getName(), aBureaucrat.getGrade());
	b->isAlloc = 1;
	this->~Bureaucrat();
	return (*b);
}

Bureaucrat::Bureaucrat( const Bureaucrat & aBureaucrat){
	if (this == &aBureaucrat)
		return ;
	Bureaucrat(aBureaucrat.getName(), aBureaucrat.getGrade());
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
	if (isAlloc == 1)
		delete this;
}

int	Bureaucrat::isERR() const {
	return (this->err);	
}

std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}

std::ostream & operator<< ( std::ostream &out, const Bureaucrat &aBureaucrat ){
	if (aBureaucrat.isERR())
		return (out);
	else
		out << aBureaucrat.getName() << " bureaucrat grade " << aBureaucrat.getGrade();
	return (out);
}