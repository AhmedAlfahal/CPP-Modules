/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:49:04 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/16 14:57:25 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;
class Form{

	private:
		const std::string name;
		std::string signedBureaucrat;
		std::string signedBureaucratName;
		bool isSigned;
		const int signGrade;
		const int execGrade;
		int error;
	public:
		Form();
		Form( std::string aName, int reqSign, int reqExec);
		Form( const Form & aForm );
		Form & operator= ( const Form & aForm );
		~Form();
		int				getSignGrade() const ;
		int				getExecGrade() const ;
		int				getError() const;
		bool			getIsSigned() const ;
		void			beSigned( Bureaucrat & aBureaucrat ) ;
		std::string		getSignedBureaucrat() const ;
		std::string		getSignedBureaucratName() const ;
		std::string		getFormName() const ;
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
};

std::ostream & operator<< ( std::ostream &out, const Form &aForm );

#endif