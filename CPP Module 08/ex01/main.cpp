#include "Span.hpp"

int main( void ){
	Span sp = Span(10000);
	sp.addNumber();
	try {
		sp.addNumber();
	}
	catch ( std::exception & e ) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}