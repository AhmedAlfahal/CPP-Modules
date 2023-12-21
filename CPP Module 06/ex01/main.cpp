/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:41:17 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/21 08:03:08 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <ostream>

int main (){
	Data a;
	Data *New;
	uintptr_t result;
	a.aX = "69";
	a.x = 69;

	std::cout << a.aX << std::endl;
	std::cout << a.x << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	result = Serializer::serialize(&a);
	std::cout << result << std::endl;	
	std::cout << "--------------------------------------------" << std::endl;
	New = Serializer::deserialize(result);
	std::cout << New->x << std::endl;
	std::cout << New->aX << std::endl;
}

