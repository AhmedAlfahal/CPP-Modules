/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 20:24:21 by aalfahal          #+#    #+#             */
/*   Updated: 2024/01/14 20:24:43 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <vector>
#include <deque>
#include <list>
#include "easyfind.hpp"



int main( void ){
	/********************Declearing*Containers*****************/
	std::vector<int> g1;
	std::deque<int> g2;
	std::list<int> g3;
	/**********************************************************/
	/********************Inserting*Them************************/
	for (int i = 1; i < 5; i++){
		g1.push_back(i);
	}
	for (int i = 1; i < 5; i++){
		g2.push_back(i);
	}
	for (int i = 1; i < 5; i++){
		g3.push_back(i);
	}
	/**********************************************************/
	/*******************Printing*Them**************************/
	printCon(g1);
	printCon(g2);
	printCon(g3);
	/**********************************************************/
	try{
		easyfind(g1, 3);
		easyfind(g2, 3);
		easyfind(g3, 3);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}