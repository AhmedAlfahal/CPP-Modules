/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:49:04 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/14 17:27:51 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private:
		const std::string name;
		std::string signedBureaucrat;
		std::string signedBureaucratName;
		bool isSigned;
		const int signGrade;
		const int execGrade;
		int error;
	public:
		AForm();
		AForm( std::string aName, int reqSign, int reqExec);
		AForm( const AForm & aAForm );
		AForm & operator= ( const AForm & aAForm );
		virtual ~AForm();
		int				getError() const ;
		int				getSignGrade() const ;
		int				getExecGrade() const ;
		bool			getIsSigned() const ;
		void			beSigned( Bureaucrat & aBureaucrat ) ;
		std::string		getAFormName() const ;
		std::string		getSignedBureaucrat() const ;
		std::string		getSignedBureaucratName() const ;
		virtual bool	execute(Bureaucrat const & executor) const = 0;
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	
	class FormIsNotSigned : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream & operator<< ( std::ostream &out, const AForm &aAForm );

#endif