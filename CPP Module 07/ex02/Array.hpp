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

#include <exception>
template <typename T>
class Array {
	private:
		T *elements;
		int	arraySize;
	public:
    	Array ();
    	Array ( unsigned int n );
		Array( const Array & aArray );
		Array & operator= ( const Array & aArray );
    	~Array ();
		T & operator[] (int index);
		int	size() const;
		class OutOfBoundaries : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#include "Array.tpp"

#endif