/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:39:41 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/26 20:15:05 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T  *array, int len, void (f)(T&))
{
	for (int i = 0 ; i < len; i++)
		f(array[i]);
}

template <typename T> 
void print(T  *array, int len)
{
	std::cout << "[ ";
	for (int i = 0 ; i < len; i++)
		std::cout << array[i]  << ", ";
	std::cout << " ]" << std::endl;
}

template <typename T> 
void fill(T *array, int len, T fill)
{
	for (int i = 0 ; i < len; i++)
		array[i] = fill;
}

template <typename T> 
void test(T & array)
{
	(void )array;
}

#endif