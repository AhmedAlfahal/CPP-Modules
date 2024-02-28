#include "BitcoinExchange.hpp"
#include <vector>



const char * BitcoinExchange::NoDatabaseProvided::what() const throw(){
	return ("BitcoinExchange::NoDatabaseProvided");
}

const char * BitcoinExchange::WrongInputFile::what() const throw(){
	return ("BitcoinExchange::WrongInputFile");
}

BitcoinExchange::BitcoinExchange (){
	this->currentSeparator = ',';
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
	if (date.length() != 10)
		return (false);
	while (std::getline(d, num, '-')){
		if (counter > 2)
			return (false);
		if (MyIsDigit(num) == false)
			return (false);
		if (counter == 0 )
		{
			if (atoi(num.c_str()) > 2024 || num.length() != 4)
				return (false);
		}
		else if (counter == 1)
		{
			if ((atoi(num.c_str()) > 12 || num.length() != 2))
				return (false);
		}
		else if (counter == 2)
		{
			if (atoi(num.c_str()) > 31 || num.length() != 2)
				return (false);
		}
		counter++;
	}
	return (true);
}

void BitcoinExchange::calculate()
{
	std::vector < std::string >::iterator tmpIt_date = this->input_date.begin();
	std::vector < float >::iterator tmpIt_value = this->input_value.begin();
	std::map < std::string , float >::iterator tmpDataIt;
	while (tmpIt_date != this->input_date.end() && tmpIt_value != this->input_value.end())
	{
		tmpDataIt = this->data.lower_bound(*tmpIt_date);
		if (tmpDataIt != this->data.end())
		{
			if (validateDate(*tmpIt_date) == false)
				std::cerr << "Error: bad input => " << *tmpIt_date << std::endl;
			else if (*tmpIt_value < 0)
				std::cerr << "Error: not a positive number." << std::endl;
			else if (*tmpIt_value > 2147483647.0)
				std::cerr << "Error: too large a number." << std::endl;
			else
				std::cout << *tmpIt_date << " => " << *tmpIt_value << " = " << (*tmpIt_value) * tmpDataIt->second << std::endl;
		}
		tmpIt_date++;
		tmpIt_value++;
	}
}
static void cleanSpaces( std::string & aString ){
	for (unsigned int i = 0; i < aString.length(); i++)
	{
		if (aString[i] == ' ' || (aString[i] >= 9 && aString[i] <= 13))
		{
				aString.erase(i, 1);
				i--;
		}
	}
}

bool BitcoinExchange::readFile( std::string & aFile )
{
	std::ifstream myFile;
	int	numberOfWords = 0;
	myFile.open(aFile.c_str());
	std::string line;
	std::string word;
	std::string tmpDate;
	std::string tmpValue;
	if (myFile.is_open() == false)
		return (false);
	std::getline(myFile, line);
	cleanSpaces(line);
	if (line != "date,exchange_rate" && this->currentSeparator == ',')
		return (false);
	else if (line != "date|value" && this->currentSeparator == '|')
	{
		std::cerr << "Invalid line [" << line << "]" << std::endl;
		return (false);
	}
	while (myFile.good())
	{
		numberOfWords = 0;
		std::getline(myFile, line);
		cleanSpaces(line);
		if (line.empty() || line[line.length() - 1] == this->currentSeparator)
		{
			std::cerr << "Invalid line [" << line << "]" << std::endl;
			return (false);
		}
		std::stringstream l(line);
		while (std::getline(l, word,this->currentSeparator))
		{
			if (numberOfWords == 0)
			{
				if (validateDate(word) == false && this->currentSeparator == ',')
				{
					std::cerr << "invalid Date" << std::endl;
					return (false);
				}
				tmpDate = word;
				numberOfWords++;
			}
			else if (numberOfWords == 1)
			{
				if ((MyIsDigit(word) == false || (atof(word.c_str()) > 1000 && this->currentSeparator == '|')) && this->currentSeparator == ',')
				{
					std::cerr << "invalid Number " << word << std::endl;
					return (false);
				}
				tmpValue = word;
				numberOfWords++;
			}
			else if (numberOfWords >= 2 && this->currentSeparator == ',')
			{
				std::cerr << "alot of arguments" << std::endl;
				return (false);
			}
		}
		if (this->currentSeparator == ',')
			this->data.insert(std::make_pair(tmpDate, atof(tmpValue.c_str())));
		else if (this->currentSeparator == '|')
		{
			this->input_date.push_back(tmpDate);
			this->input_value.push_back(atof(tmpValue.c_str()));
		}
	}
	return (true);
}

void BitcoinExchange::btc ( std::string  aFile ){
	std::string dataBase = "data.csv";
	if (readFile(dataBase) == false)
		throw (NoDatabaseProvided());
	this->currentSeparator = '|';
	readFile(aFile);
	this->calculate();
}
