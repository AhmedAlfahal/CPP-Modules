/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:41:22 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/21 07:59:03 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>

struct Data{
	int	x;
	std::string aX;
};

class Serializer{
	public:
		Serializer();
		Serializer( const  Serializer & aSerializer );
		Serializer & operator= ( const Serializer & aSerializer );
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		virtual ~Serializer() = 0;
};

#endif