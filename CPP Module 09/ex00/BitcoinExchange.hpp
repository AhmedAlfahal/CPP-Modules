#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <exception>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
class BitcoinExchange {
	private:
		std::map < std::string , float > data;
		bool isDatabase;
		bool readDataBase();
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