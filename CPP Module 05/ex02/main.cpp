/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 02:36:38 by aalfahal          #+#    #+#             */
/*   Updated: 2023/09/01 22:47:34 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ( void )
{
	Form a("Ahmed", 49, 01);
	Form aa("Ahmed", 49, 01);
	Bureaucrat bb("Hello", 100);
	Bureaucrat b("Nadir", 100);
	std::cout << "=====================================" << std::endl;
	b.signForm(a);
	a.beSigned(b);
	b.signForm(a);
	std::cout << "=====================================" << std::endl;
	bb.signForm(a);
	a.beSigned(bb);
	bb.signForm(a);
	std::cout << "=====================================" << std::endl;
	b.signForm(aa);
	aa.beSigned(b);
	b.signForm(aa);
	std::cout << "=====================================" << std::endl;
}