/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:30:00 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/15 15:34:54 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

class AForm;

class Intern{
	private:
		AForm *RobotomyRequest( std::string aTarget );
		AForm *ShrubberyCreation( std::string aTarget );
		AForm *PresidentialPardon( std::string aTarget );
	public:
		Intern();
		Intern( const Intern &  aIntern);
		Intern & operator= ( const Intern &aIntern );
		~Intern();
		AForm *makeForm( std::string aForm, std::string aTarget );
};

#endif