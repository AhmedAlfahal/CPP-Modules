#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <exception>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>

class BitcoinExchange {
	private:
		void calculate();
		char currentSeparator;
		bool readFile( std::string & aFile );
		std::map < std::string , float > data;
		std::vector < std::string > input_date;
		std::vector < float > input_value;
	public:
		BitcoinExchange ();
		BitcoinExchange ( const BitcoinExchange & aBitcoinExchange );
		BitcoinExchange & operator= ( const BitcoinExchange & aBitcoinExchange );
		~BitcoinExchange ();
		void btc ( std::string aFile );
		class NoDatabaseProvided : public std::exception
		{
			public:
				const char * what() const throw();
		};
		class WrongInputFile : public std::exception
		{
			public:
				const char * what() const throw();
		};
};

#endif