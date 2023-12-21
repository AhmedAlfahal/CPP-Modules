/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:52:59 by aalfahal          #+#    #+#             */
/*   Updated: 2023/12/21 05:58:43 by aalfahal         ###   ########.fr       */
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
	if (aString.length() == 1 && !(aString[0] >= '0' && aString[0] <= '9'))
		return (false);
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
	float	newValue = 0;
	
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
		newValue = atof(aString.c_str());
		if (static_cast<char> (newValue) >= 32 && static_cast<char> (newValue) <= 126)
			std::cout << "char '" << static_cast<char> (newValue) << "'" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
	std::cout << "int " << static_cast<int> (newValue)<< std::endl;\
	if (newValue == static_cast<int> (newValue))
	{
		std::cout << "float " << static_cast<float> (newValue) << ".0f"<< std::endl;
		std::cout << "double " << static_cast<double> (newValue) << ".0" << std::endl;
		return ;
	}
	std::cout << "float " << static_cast<float> (newValue) << "f"<< std::endl;
	std::cout << "double " << static_cast<double> (newValue) << std::endl;
}
