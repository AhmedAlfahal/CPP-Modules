/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:54:07 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/26 19:38:41 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T & x, T & y)
{
    T tmp = x;
	x = y;
	y = tmp;
}
template <typename T> T min(T x, T y)
{
    if (x < y)
		return (x);
	return (y);
}
template <typename T> T max(T x, T y)
{
    if (x > y)
		return (x);
	return (y);
}

#endif