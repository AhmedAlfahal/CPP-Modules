#include "easyfind.hpp"

const char *ElementNotFound::what() const throw(){
	return ("easyfind::ElementNotFound");
}