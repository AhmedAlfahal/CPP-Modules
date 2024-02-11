#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int N;
		std::vector<int> V;
		Span();
	public:
		Span(unsigned int aN);
		Span(const Span &src);
		~Span();
		Span &operator=(const Span &src);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		class NoSpan : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif