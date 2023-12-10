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
	Form a("Ahmed", 150, 01);	
	// Form aa(a);
	// aa = a;
	std::cout << a << std::endl;
}