#include "RPN.hpp"

int main ( int ac, char **args ) {
	if ( ac < 2 )
	{
		std::cout << "Usage: [" << args[0] << "] {inverted Polish mathematical}" << std::endl;
		return (1);
	}
	if (RPN::pars(args) == false || RPN::calculate() == false)
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
}