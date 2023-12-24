/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:18:50 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/25 02:35:19 by aalfahal         ###   ########.fr       */
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
	
	identify(*aA);	
	identify(*aB);	
	identify(*aC);

	delete aA;
	delete aB;
	delete aC;
}