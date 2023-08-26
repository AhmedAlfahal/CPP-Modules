/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 23:53:38 by aalfahal          #+#    #+#             */
/*   Updated: 2023/08/12 21:52:49 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <exception>

class Bureaucrat{
	private:
		const std::string name;
		int grade;
		int err;
	public:
		Bureaucrat();
		Bureaucrat( std::string aName, int aGrade );
		~Bureaucrat();
		std::string getName() const ;
		int isERR() const;
		int getGrade() const ;

};
class GradeTooHighException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

class GradeTooLowException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

std::ostream & operator<< ( std::ostream &out, const Bureaucrat &aBureaucrat );

#endif