#include "Span.hpp"
#include <ostream>

// static void printV(std::vector < int > & V){
// 	std::vector < int >::iterator it = V.begin();
// 	while (it != V.end())
// 	{
// 		std::cout << *it << " ";
// 		it++;
// 	}
// 	std::cout << std::endl;
// }

const char* Span::OutOfBoundries::what() const throw(){
	return ("Span::OutOfBoundries");
}

const char* Span::OnlyOneElement::what() const throw(){
	return ("Span::OnlyOneElement");
}

Span::Span ( unsigned int aN ) {
	this->N = aN;
}

Span::Span ( const Span & aSpan ) {
	if (this == &aSpan)
		return ;
	*this = aSpan;
}

Span & Span::operator= ( const Span & aSpan ) {
	if (this == &aSpan)
		return (*this);
	this->N = aSpan.N;
	this->V = aSpan.V;
	return (*this);
}

Span::~Span() {
}

int		Span::longestSpan(){
	if (this->V.size() <= 1)
		throw (Span::OnlyOneElement());
	std::vector < int > tmp = this->V;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

// static int shortSpan(std::vector < int >::const_iterator  begin, std::vector < int >::const_iterator  end) {
// 	static int shortSpanValue = (*(begin + 1) - *(begin));
// 	if ((begin + 1) == end)
// 		return (shortSpanValue);
// 	if (shortSpanValue > (*(begin + 1) - *(begin)) )
// 		shortSpanValue = *(begin + 1) - *(begin);
// 	return (shortSpan(++begin, end));
// }

int		Span::shortestSpan(){
	if (this->V.size() <= 1)
		throw (Span::OnlyOneElement());
	std::vector < int > tmp = this->V;
	std::sort(tmp.begin(), tmp.end());
	std::vector < int >::const_iterator  it = tmp.begin();
	int shortSpanValue = (*(it + 1) - *(it));
	for (it = tmp.begin(); (it + 1) != tmp.end(); it++)
	{
			if (shortSpanValue > (*(it + 1) - *(it)) )
			shortSpanValue = *(it + 1) - *(it);
	}
	return ( shortSpanValue );
}

void	Span::addNumber( int aNumber ){
	if (this->V.size() > this->N)
		throw Span::OutOfBoundries();
	this->V.push_back(aNumber);
}

void	Span::addNumber( void ){
    srand(time(NULL));
    for (unsigned int i = 0; i <= this->N; i++)
    {
        const int value = rand();
		this->addNumber(value);
    }
}