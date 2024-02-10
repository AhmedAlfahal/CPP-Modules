#ifndef EASYFIND_TPP
#define EASYFIND_TPP

const char *ElementNotFound::what() const throw(){
	return ("easyfind::ElementNotFound");
}

template<typename  T>
void easyfind(const T& t, int toFind)
{
	int i = 0;
	typename T::const_iterator it;
	for (it = t.begin(); it != t.end(); ++it) {
		if (toFind == *it)
		{
			std::cout << "Found at " << i << std::endl;
			return ;	
		}
		i++;
    }
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