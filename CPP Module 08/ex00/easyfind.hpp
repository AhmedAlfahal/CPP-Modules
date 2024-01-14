/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 20:14:54 by aalfahal          #+#    #+#             */
/*   Updated: 2024/01/14 20:15:54 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
template<typename  T>
void easyfind(const T& t, int toFind)
{
	typename T::const_iterator it;
	for (it = t.begin(); it != t.end(); ++it) {
		if (toFind == *it)
		{
			std::cout << "Found" << std::endl;
			return ;	
		}
    }
	std::cout << "Not Found" << std::endl;
}

template<typename  T>
void printCon(const T& t)
{	
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "[ ";
	typename T::const_iterator it;
	for (it = t.begin(); it != t.end(); ++it) {
		std::cout << *it << " ";
    }
	std::cout << "]" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

#endif