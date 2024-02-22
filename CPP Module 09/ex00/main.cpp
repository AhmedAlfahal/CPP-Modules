#include "BitcoinExchange.hpp"


int main (int ac, char **av){
	try {
		BitcoinExchange btc;
		if (ac != 2)
		{
			std::cerr << "Usage: ./btc [YourData]" << std::endl;
			return (1);
		}
			btc.btc(std::string(av[1]));
	}
	catch ( std::exception & e ) {
		std::cerr << e.what() << std::endl;
	}
}
