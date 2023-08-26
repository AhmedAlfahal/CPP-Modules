/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 23:53:38 by aalfahal          #+#    #+#             */
/*   Updated: 2023/08/27 02:05:01 by aalfahal         ###   ########.fr       */
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
		int	isAlloc;
	public:
		Bureaucrat();
		Bureaucrat( const Bureaucrat &  aBureaucrat);
		Bureaucrat( std::string aName, int aGrade );
		Bureaucrat & operator= ( const Bureaucrat &aBureaucrat );
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