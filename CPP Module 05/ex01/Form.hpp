/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:49:04 by aalfahal          #+#    #+#             */
/*   Updated: 2023/08/27 22:36:21 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include<iostream>
#include "Bureaucrat.hpp"

class Form{

	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int execGrade;
	public:
		Form();
		Form( std::string aName, int aGrade );
		Form( const Form & aForm );
		Form & operator= ( const Form & aForm );
		~Form();
		const std::string getFormName() const ;
		const bool getIsSigned() const ;
		const int getSignGrade() const ;
		const int getExecGrade() const ;
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
};
#endif