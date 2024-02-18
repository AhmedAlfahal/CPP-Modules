#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include <exception>
#include <iostream>
#include <algorithm>
#include <iterator>

class ElementNotFound : public std::exception
{
	public:
		const char* what() const throw();
};

template<typename  T>
void easyfind(const T& t, int toFind)
{
	typename T::const_iterator it = std::find(t.begin(), t.end(), toFind);
	if (*it == toFind)
		std::cout << "found" << std::endl;
	else
		throw ElementNotFound();
}

template<typename  T>
void printCon(const T& t)
{	
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "[ ";
	typename T::const_iterator it;
	for (it = t.begin(); it != t.end(); ++it) {
		std::cout << *it << " ";
    }
	std::cout << "]" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

#endif