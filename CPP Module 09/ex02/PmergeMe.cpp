#include "PmergeMe.hpp"
#include <any>
#include <type_traits>
#include <utility>



PmergeMe::PmergeMe(){
	this->odd = "ZEROOO";
}


PmergeMe::~PmergeMe(){

}

PmergeMe::PmergeMe( const PmergeMe & aPmergeMe ){
	if (this == &aPmergeMe)
		return ;
	*this = aPmergeMe;
}

PmergeMe & PmergeMe::operator= ( const PmergeMe & aPmergeMe ){
	if (this == &aPmergeMe)
		return (*this);
	return (*this);
}

static void concat_all ( std::string & all, char **args)
{
	for ( int i = 0; args[i]; i++ )
		all = all + std::string(args[i]) + " " ;
}

template<typename T>
void print( T& t)
{	
	std::cout << "--------------------------------------------" << std::endl;
	typename T::iterator it;
	for (it = t.begin(); it != t.end(); ++it) {
	std::cout << "[ ";
		std::cout << it->first << " , ";
		std::cout << it->second << " ";
	std::cout << "]" << std::endl;
    }
	std::cout << "--------------------------------------------" << std::endl;
}

static bool check_word ( std::string & word ) {
	static int wordCount;
	if (word.empty() || wordCount >= 10)
		return (false);
	if ( ( (word[0] == '/' || word[0] == '*') && word.length() == 1 ) )
		return (true);
	for ( unsigned int i = 0; i < word.length(); i++ )
	{
		if ( (( word[i] == '-' || word[i] == '+' ) && i == 0) )
			continue;
		if ( std::isdigit(word[i]) == 0 )
			return (false);
	}
	if (word == "-" || word == "+" || word == "*" || word == "/")
		wordCount++;
	return (true);
}

bool PmergeMe::pars ( char **arg ){
	std::string all;
	int i = 0;
	std::string tmpValue;
	std::string word;
	concat_all(all, arg + 1);
	std::istringstream l(all);
	while ( l >> word )
	{
		if ( !check_word(word) )
			return (false);
		if ( i % 2 == 1 )
		{
			this->aVector.push_back(std::make_pair(std::atoi(tmpValue.c_str()), std::atoi(word.c_str())));
			this->aDeque.push_back(std::make_pair(std::atoi(tmpValue.c_str()), std::atoi(word.c_str())));
		}
		else
			tmpValue = word;
		i++;
	}
	if (i % 2 == 1)
		this->odd = word;
	std::cout << "Before: " << all << std::endl;
	// print(this->aVector);
	// print(this->aDeque);
	// std::cout << this->odd << std::endl;
	return (true);
}

template<typename T>
void sort_each_pair( T& t)
{	
	typename T::iterator it;
	for (it = t.begin(); it != t.end(); ++it) {
		if (it->first > it->second)
			std::swap(it->first, it->second);
    }
}

// template<typename T>
void sort_by_larger_value(  std::vector< std::pair< int, int> >::iterator  begin , std::vector< std::pair< int, int> >::iterator  end, size_t size)
{
		std::cout << "first " << begin->first << " second " << (end)->first << " size " << size << std::endl;
	if (size > 2)
	{
		sort_by_larger_value(begin, begin + (size / 2) , size / 2);
		sort_by_larger_value(begin + size / 2, begin + size, size / 2);
	}
	else if (size == 2)
	{
		if (begin->first > end->first)
			std::swap(begin->first, end->first);
		return ;
	}
	
}

void PmergeMe::sort (  ){
	sort_each_pair(this->aVector);
	print(this->aVector);
	std::cout << "After sorting pairs" << std::endl;
	sort_by_larger_value(this->aVector.begin(), --this->aVector.end(), this->aVector.size());
	print(this->aVector);
}