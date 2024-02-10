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
#include <forward_list>
#include <list>
#include <array>
#include "easyfind.hpp"



int main( void ){
	/********************Declearing*Containers*****************/
	std::array <int, 4> g0 = {1, 2, 3, 4};
	std::vector<int> g1;
	std::deque<int> g2;
	std::forward_list<int> g3;
	std::list<int> g4;
	/**********************************************************/
	/********************Inserting*Them************************/
	for (int i = 1; i < 5; i++){
		g1.push_back(i);
	}
	for (int i = 1; i < 5; i++){
		g2.push_back(i);
	}
	for (int i = 4; i > 0; i--){
		g3.push_front(i);
	}
	for (int i = 1; i < 5; i++){
		g4.push_back(i);
	}
	/**********************************************************/
	/*******************Printing*Them**************************/
	printCon(g0);
	printCon(g1);
	printCon(g2);
	printCon(g3);
	printCon(g4);
	/**********************************************************/
	easyfind(g0, 3);
	easyfind(g1, 3);
	easyfind(g2, 3);
	easyfind(g3, 3);
	easyfind(g4, 3);
}