#include "PmergeMe.hpp"
#include <deque>

std::deque< int > sortedDeque ;
std::vector< int > sortedVector ;

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

template<typename T>
static void merge( T & left, T & right, T & comb ) {
	int leftSize = left.size();
	int rightSize = right.size();
	int i = 0;
	int l = 0;
	int r = 0;
	for (; l < leftSize && r < rightSize; i++)
	{
		if (left[l].second < right[r].second)
			comb[i].second = left[l++].second;
		else
		 	comb[i].second = right[r++].second;
	}
	for (; l < leftSize; i++)
		comb[i].second = left[l++].second;
	for (; r < rightSize; i++)
		comb[i].second = right[r++].second;
}

template<typename T>
void mergeSort(  T & comb , size_t size)
{
	if (size == 1)
		return ;
	std::vector< std::pair< int, int> > left (comb.begin(), comb.begin() + (size / 2));
	std::vector< std::pair< int, int> > right (comb.begin() + (size / 2), comb.end());
	mergeSort(left, left.size());
	mergeSort(right, right.size());
	merge(left, right, comb);
}

template<typename T>
void insertionSort(  T & comb )
{
	if (typeid(T) == typeid(std::vector< std::pair < int, int > >))
	{
		
	}
	else
	{
	
	}
}

template<typename T>
void fordJonson(  T & comb )
{
	sort_each_pair(comb);
	mergeSort(comb, comb.size());
	insertionSort(comb);
}
void PmergeMe::sort (  ){
	fordJonson(this->aVector);
	std::cout << "After: ";
	print(this->aVector);
}