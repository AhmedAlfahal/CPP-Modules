/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 02:36:38 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/21 09:27:19 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"


int main ( void )
{
	Intern aa;
	AForm *a = aa.makeForm("robotomy request", "1st");
	AForm *b = aa.makeForm("presidential pardon", "2st");
	AForm *c = aa.makeForm("shrubbery creation", "3st");
	(void)a;
	(void)b;
	(void)c;
}