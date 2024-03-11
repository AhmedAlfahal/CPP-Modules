#include "BitcoinExchange.hpp"

const char * BitcoinExchange::NoFileFound::what() const throw(){
	return ("BitcoinExchange::NoFileFound");
}

const char * BitcoinExchange::WrongInput::what() const throw(){
	return ("BitcoinExchange::WrongInput");
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

static bool isLeapYear(int year) {  
    if (year % 4 == 0) {  
        if (year % 100 == 0) {  
            if (year % 400 == 0) {  
                return true;  
            } else {  
                return false;  
            }  
        } else {  
            return true;  
        }  
    } else {  
        return false;  
    }  
}  

static bool validateDate( std::string & date )
{
	std::istringstream d(date);
	std::string num;
	bool isLeap;
	int tmpMonth;
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
			isLeap = isLeapYear(atoi(num.c_str()));
			if (atoi(num.c_str()) > 2022 || num.length() != 4)
				return (false);
		}
		else if (counter == 1)
		{
			tmpMonth = atoi(num.c_str());
			if (tmpMonth > 12 || num.length() != 2)
				return (false);
		}
		else if (counter == 2)
		{
			if ( ( atoi(num.c_str()) == 31 && tmpMonth !=1 && tmpMonth !=3 && tmpMonth !=5 && tmpMonth !=7 && tmpMonth !=8 && tmpMonth !=10 && tmpMonth !=12 )
			|| num.length() != 2 || (isLeap == false && tmpMonth == 2 && atoi(num.c_str()) == 29))
				return (false);
		}
		counter++;
	}
	return (true);
}

void BitcoinExchange::calculate( std::string aDate, float aValue )
{
	std::map < std::string , float >::iterator tmpDataIt;
	tmpDataIt = this->data.lower_bound(aDate);
	if (validateDate(aDate) == false)
		std::cerr << "Error: bad input => " << aDate << std::endl;
	else if (aValue <= 0)
		std::cerr << "Error: not a positive number." << std::endl;
	else if (aValue > 2147483647.0)
		std::cerr << "Error: too large a number." << std::endl;
	else
		std::cout << aDate << " => " << aValue << " = " << (aValue) * tmpDataIt->second << std::endl;
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
		throw NoFileFound();
	std::getline(myFile, line);
	cleanSpaces(line);
	if (line != "date,exchange_rate" && this->currentSeparator == ',')
		return (false);
	else if (line != "date|value" && this->currentSeparator == '|')
		return (false);
	while (myFile.good())
	{
		numberOfWords = 0;
		std::getline(myFile, line);
		cleanSpaces(line);
		if (line.empty() || line[line.length() - 1] == this->currentSeparator)
			return (false);
		std::stringstream l(line);
		while (std::getline(l, word,this->currentSeparator))
		{
			if (numberOfWords == 0)
			{
				if (validateDate(word) == false && this->currentSeparator == ',')
					return (false);
				tmpDate = word;
				numberOfWords++;
			}
			else if (numberOfWords == 1)
			{
				if ((MyIsDigit(word) == false || (atof(word.c_str()) > 1000 && this->currentSeparator == '|')) && this->currentSeparator == ',')
					return (false);
				tmpValue = word;
				numberOfWords++;
			}
			else if (numberOfWords >= 2 && this->currentSeparator == ',')
				return (false);
		}
		if (this->currentSeparator == ',')
			this->data.insert(std::make_pair(tmpDate, atof(tmpValue.c_str())));
		else if (this->currentSeparator == '|')
			this->calculate(tmpDate, std::atof(tmpValue.c_str()));
	}
	return (true);
}

void BitcoinExchange::btc ( std::string  aFile ){
	std::string dataBase = "data.csv";
	if (readFile(dataBase) == false)
		throw (WrongInput());
	this->currentSeparator = '|';
	readFile(aFile);
}
