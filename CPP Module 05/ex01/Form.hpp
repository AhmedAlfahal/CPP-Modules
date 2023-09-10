/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:49:04 by aalfahal          #+#    #+#             */
/*   Updated: 2023/09/02 18:48:09 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form{

	private:
		const std::string name;
		std::string signedBurru;
		bool isSigned;
		const int signGrade;
		const int execGrade;
		int err;
	public:
		Form();
		Form( std::string aName, int aGrade );
		Form( const Form & aForm );
		Form & operator= ( const Form & aForm );
		~Form();
		std::string getFormName() const ;
		bool getIsSigned() const ;
		void signForm() const ;
		int getSignGrade() const ;
		int getExecGrade() const ;
		int getError() const;
		std::string getSignedBurru() const ;
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

std::ostream & operator<< ( std::ostream &out, const Form &aForm );

#endif