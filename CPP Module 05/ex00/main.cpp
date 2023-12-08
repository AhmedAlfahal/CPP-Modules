/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 02:36:38 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/09 00:24:21 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main ( void )
{
	Bureaucrat a("fdsff", 149);
	Bureaucrat aa;
	aa = a;
	Bureaucrat aaa("ds", 2);
	std::cout << a << std::endl;
	std::cout << aa << std::endl;
	std::cout << aaa << std::endl;
	aaa.incrementGrade();
	std::cout << aaa << std::endl;
	aaa.incrementGrade();
	a.decrementGrade();
	a.decrementGrade();
}