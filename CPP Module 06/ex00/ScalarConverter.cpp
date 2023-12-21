/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:52:59 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/21 05:13:22 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstddef>

ScalarConverter::ScalarConverter(){
}

ScalarConverter::ScalarConverter( const ScalarConverter & aScalarConverter ){
	if (this == &aScalarConverter)
		return ;
	*this = aScalarConverter;
}

ScalarConverter & ScalarConverter::operator= ( const ScalarConverter & aScalarConverter ){
	if (this == &aScalarConverter)
		return (*this);
	return (*this);
}

ScalarConverter::~ScalarConverter(){
}

static bool parse( std::string aString ){
	bool result = true;
	for (size_t i = 0; i < aString.length(); i++){
		if ((aString[i] == '-' || aString[i] == '+') && i != 0){
			result = false;
			continue;
		}
		else if ((aString[i] == '-' || aString[i] == '+') && i == 0)
			continue;
		else if (aString[i] == 'f' && i != aString.length() - 1){
			result = false;
			continue;
		}
		else if (aString[i] == 'f' && i == aString.length() - 1)
			continue;
		else if (!(aString[i] >= '0' && aString[i] <= '9') && aString[i] != '.'){
			result = false;
		}
	}
	return (result);
}

void ScalarConverter::convert( std::string aString ){
	char	charr = 0;
	int		intt = 0;
	float	floatt = 0;
	double	doublee = 0;
	
	if (aString == "nan" || aString == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	else if (aString == "-inff" || aString == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: -inf" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;	
	}
	else if (aString == "inff" || aString == "inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: -inf" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;	
	}
	else if (parse(aString) == false)
	{
		std::cout << "It's impossible!!!" << std::endl;
		return ;
	}
	else
	{
		floatt = atof(aString.c_str());
		doublee = floatt;
		intt = floatt;
		charr = floatt;
		if (charr >= 32 && charr <= 126)
			std::cout << "char '" << charr << "'" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
	std::cout << "int " << intt<< std::endl;\
	if (floatt == intt)
	{
		std::cout << "float " << floatt << ".0f"<< std::endl;
		std::cout << "double " << doublee << ".0" << std::endl;
		return ;
	}
	std::cout << "float " << floatt << "f"<< std::endl;
	std::cout << "double " << doublee << std::endl;
}
