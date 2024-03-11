#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <exception>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

class BitcoinExchange {
	private:
		void calculate( std::string aDate, float aValue );
		char currentSeparator;
		bool readFile( std::string & aFile );
		std::map < std::string , float > data;
	public:
		BitcoinExchange ();
		BitcoinExchange ( const BitcoinExchange & aBitcoinExchange );
		BitcoinExchange & operator= ( const BitcoinExchange & aBitcoinExchange );
		~BitcoinExchange ();
		void btc ( std::string aFile );
		class NoFileFound : public std::exception
		{
			public:
				const char * what() const throw();
		};
		class WrongInput : public std::exception
		{
			public:
				const char * what() const throw();
		};
};

#endif