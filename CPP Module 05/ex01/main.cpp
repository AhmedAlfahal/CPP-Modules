/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 02:36:38 by aalfahal          #+#    #+#             */
/*   Updated: 2023/08/27 22:20:31 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main ( void )
{
	Bureaucrat a("fdsff", 1110);
	Bureaucrat aa;
	aa = a;
	Bureaucrat aaa("ds", 4);
	std::cout << a << std::endl;
	std::cout << aa << std::endl;
	std::cout << aaa << std::endl;
	
}