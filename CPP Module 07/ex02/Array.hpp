/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 08:49:44 by aalfahal          #+#    #+#             */
/*   Updated: 2024/01/07 23:36:51 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


template <typename T>
class Array {
	private:
		T *elements;
	public:
    	Array ();
    	Array ( unsigned int n );
		Array( Array & aArray );
		Array & operator= ( Array & aArray );
    	~Array ();
		T & operator[] (int index);
		int	size();
};

#include "Array.tpp"

#endif