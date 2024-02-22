#include "BitcoinExchange.hpp"
#include <iostream>


const char * BitcoinExchange::NoDatabaseProvided::what() const throw(){
	return ("BitcoinExchange::NoDatabaseProvided");
}

const char * BitcoinExchange::WrongInputFile::what() const throw(){
	return ("BitcoinExchange::WrongInputFile");
}

BitcoinExchange::BitcoinExchange (){
}

BitcoinExchange::BitcoinExchange ( const BitcoinExchange & aBitcoinExchange ){
	if (this == &aBitcoinExchange)
		return ;
	*this = aBitcoinExchange;
}

BitcoinExchange & BitcoinExchange::operator= ( const BitcoinExchange & aBitcoinExchange ){
	if (this == &aBitcoinExchange)
		return (*this);
	return (*this);
}

BitcoinExchange::~BitcoinExchange (){

}

static bool MyIsDigit ( std::string & num )
{
	int dot = 0;
	for (unsigned int i = 0; i < num.length(); i++)
	{
		if (dot > 1)
			return (false);
		if (num[i] == '.')
		{
			dot++;
			continue ;
		}
		if (!std::isdigit(num[i]))
			return (false);
		
	}
	return (true);
}

static bool validateDate( std::string & date )
{
	std::istringstream d(date);
	std::string num;
	int counter = 0;
	while (std::getline(d, num, '-')){
		if (counter > 2)
		{
			std::cerr << "Date has extra things " << num << std::endl;
			return (false);
		}
		if (MyIsDigit(num) == false)
		{
			std::cerr << "Wrong digits " << num << std::endl;
			return (false);
		}
		counter++;
	}
	return (true);
}

static void printMap( std::map < std::string , float > & data ){
	for (std::map < std::string , float >::iterator it = data.begin(); it != data.end(); it++)
	{
		std::cout << it->first << " " << it->second << std::endl;
	}
}

static void cleanSpaces( std::string & aString ){
	while (aString[0] == ' ' || (aString[0] >= 9 && aString[0] <= 13))
		aString.erase(0, 1);
	while (aString[aString.length() - 1] == ' ' || (aString[aString.length() - 1] >= 9 && aString[aString.length() - 1] <= 13))
		aString.erase(aString.length() - 1, 1);
}

bool BitcoinExchange::readDataBase()
{
	std::ifstream myFile;
	int	numberOfWords = 0;
	myFile.open("data.csv");
	std::string line;
	std::string word;
	std::string tmpDate;
	std::string tmpValue;
	if (myFile.is_open() == false)
		return (false);
	std::getline(myFile, line);
	cleanSpaces(line);
	if (line != "date,exchange_rate")
		return (false);
	while (myFile.good())
	{
		numberOfWords = 0;
		std::getline(myFile, line);
		std::stringstream l(line);
		while (std::getline(l, word,','))
		{
			if (numberOfWords == 0)
			{
				if (validateDate(word) == false)
				{
					std::cerr << "invalid Date" << std::endl;
					return (false);
				}
				tmpDate = word;
				numberOfWords++;
			}
			else if (numberOfWords == 1)
			{
				if (MyIsDigit(word) == false)
				{
					std::cerr << "invalid Number" << std::endl;
					return (false);
				}
				tmpValue = word;
				numberOfWords++;
			}
			else if (numberOfWords >= 2)
			{
				std::cerr << "alot of arguments" << std::endl;
				return (false);
			}
		}
		std::cout << "Date: " << tmpDate << " Value: " << tmpValue << " Word: " << word << std::endl;
		this->data.insert(std::make_pair(tmpDate, std::stod(tmpValue.c_str())));
	}
	return (true);
}

void BitcoinExchange::btc ( std::string  aFile ){
	if (readDataBase() == false)
		throw (NoDatabaseProvided());
	(void)aFile;
	// std::ifstream myFile;
	// std::string line;
	// myFile.open(aFile);
	// if (myFile.is_open() == false)
	// 	throw (NoDatabaseProvided());
	// while (myFile.good())
	// {
	// 	std::getline(myFile, line);
	// 	std::cout << line << std::endl;
	// }
	printMap(this->data);
}
