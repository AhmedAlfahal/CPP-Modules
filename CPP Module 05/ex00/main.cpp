/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 02:36:38 by aalfahal          #+#    #+#             */
/*   Updated: 2023/08/27 02:09:30 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main ( void )
{
	Bureaucrat a("Ahmed", 10);
	Bureaucrat aa(a);
	Bureaucrat aaa("Ahmed", 4);
	std::cout << a << std::endl;
	std::cout << aa << std::endl;
	std::cout << aaa << std::endl;
	
}