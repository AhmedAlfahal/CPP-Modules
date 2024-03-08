#include "PmergeMe.hpp"

int main ( int ac, char **args ) {
	PmergeMe p;
	if ( ac < 2 )
	{
		std::cout << "Usage: [" << args[0] << "] {number should be sorted}" << std::endl;
		return (1);
	}
	if (p.pars(args) == false)
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
	p.sort();
}