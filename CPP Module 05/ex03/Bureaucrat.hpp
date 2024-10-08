/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 23:53:38 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/15 16:18:51 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class AForm;

class Bureaucrat{
	private:
		const std::string name;
		int grade;
		int error;
	public:
		Bureaucrat();
		Bureaucrat( const Bureaucrat &  aBureaucrat);
		Bureaucrat( std::string aName, int aGrade );
		Bureaucrat & operator= ( const Bureaucrat &aBureaucrat );
		~Bureaucrat();
		std::string getName() const ;
		int		getError() const ;
		void	incrementGrade() ;
		void	decrementGrade() ;
		void	signForm( const AForm & aForm );
		int		getGrade() const ;
		void	executeForm(AForm const & form);
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

std::ostream & operator<< ( std::ostream &out, const Bureaucrat &aBureaucrat );

#endif