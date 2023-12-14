/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 02:36:38 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/14 16:18:56 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "Bureaucrat.hpp"

int main ( void )
{
	AForm *a = new PresidentialPardonForm("Presindtial");
	AForm *b = new RobotomyRequestForm("Robot");
	AForm *c = new ShrubberyCreationForm("Shurbbery");
	Bureaucrat d("Ahmed", 1);
	a->getError();
	b->getError();
	c->getError();
}