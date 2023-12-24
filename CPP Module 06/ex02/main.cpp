/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:18:50 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/25 03:54:37 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
int main(){
	Base *aA = generate();
	Base *aB = generate();
	Base *aC = generate();
	
	std::cout << "identify by refrence " << std::endl;
	identify(*aA);	
	identify(*aB);	
	identify(*aC);
	std::cout << "----------------------" << std::endl;
	std::cout << "identify by Pointer " << std::endl;
	identify(aA);	
	identify(aB);	
	identify(aC);
	std::cout << "----------------------" << std::endl;

	delete aA;
	delete aB;
	delete aC;
}