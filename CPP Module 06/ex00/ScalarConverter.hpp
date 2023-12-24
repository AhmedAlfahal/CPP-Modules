/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:13:33 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/24 22:49:03 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <cstdlib>
#include <iostream>

class ScalarConverter{
	private:
		ScalarConverter();
		ScalarConverter( const ScalarConverter & aScalarConverter );
		ScalarConverter & operator= ( const ScalarConverter & aScalarConverter );	
		~ScalarConverter();
	public:
		static void convert( std::string aString );
};

#endif