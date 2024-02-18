#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>

class Span {

	private:
		unsigned int N;
		std::vector < int > V;
	public:
		Span ( unsigned int aN );
		Span ( const Span & aSpan );
		Span & operator= ( const Span & aSpan );
		~Span();
		int		longestSpan();
		int		shortestSpan();
		void	addNumber( int aNumber );
		void	addNumber( void );
	class OutOfBoundries : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class OnlyOneElement : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

#endif