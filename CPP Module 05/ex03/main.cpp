/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 02:36:38 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/15 15:17:23 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"


int main ( void )
{
	Intern aa;
	AForm *b = aa.makeForm("presidential pardon", "2st");
	AForm *a = aa.makeForm("romy request", "1st");
	AForm *c = aa.makeForm("shrubbery creation", "1st");

	std::cout << *a << std::endl;
	std::cout << *b << std::endl;
	std::cout << *c << std::endl;
	delete a;
	delete b;
	delete c;
}