/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:41:20 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/21 07:55:05 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
}

Serializer::Serializer( const  Serializer & aSerializer ){
	if (this == &aSerializer)
		return ;
	*this = aSerializer;
}

Serializer & Serializer::operator= ( const Serializer & aSerializer ){
	if (this == &aSerializer)
		return (*this);
	return (*this);
}

Serializer::~Serializer(){
}

uintptr_t Serializer::serialize(Data* ptr){
	return ( reinterpret_cast <uintptr_t> ( ptr ) );
}

Data* Serializer::deserialize(uintptr_t raw){
	return ( reinterpret_cast < Data * > ( raw ) );
}
