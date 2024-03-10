#include "PmergeMe.hpp"

std::string odd = "ZEROO";
std::deque< int > sortedDeque ;
std::vector< int > sortedVector ;

PmergeMe::PmergeMe(){
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
	this->aDeque = aPmergeMe.aDeque;
	this->aVector = aPmergeMe.aVector;
	return (*this);
}

static void concat_all ( std::string & all, char **args)
{
	for ( int i = 0; args[i]; i++ )
		all = all + std::string(args[i]) + " " ;
}

template<typename T>
void printS( T& t)
{	
	typename T::iterator it;
	for (it = t.begin(); it != t.end(); ++it) {
		std::cout << *it << " ";
    }
	std::cout << std::endl;
}

static bool check_word ( std::string & word ) {
	for ( unsigned int i = 0; i < word.length(); i++ )
	{
		if ( (( word[i] == '+' ) && i == 0) )
		{
			if (word.length() == 1)
				return (false);
			continue;
		}
		if ( std::isdigit(word[i]) == 0 )
			return (false);
	}
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
		odd = word;
	if (this->aDeque.size() == 0)
		return (false);
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
			std::swap(comb[i], left[l++]);
		else
		 	std::swap(comb[i],right[r++]);
	}
	for (; l < leftSize; i++)
		std::swap(comb[i], left[l++]);
	for (; r < rightSize; i++)
		std::swap(comb[i], right[r++]);
}

template<typename T>
void mergeSort(  T & comb , size_t size)
{
	if (size == 1)
		return ;
	T left (comb.begin(), comb.begin() + (size / 2));
	T right (comb.begin() + (size / 2), comb.end());
	mergeSort(left, left.size());
	mergeSort(right, right.size());
	merge(left, right, comb);
}

template<typename T, typename U>
void insertionSort(  T & comb, U & single )
{
	typename T::iterator it = comb.begin();
	for (; it != comb.end(); it++)
	{
		if (it == comb.begin())
		{
			single.push_back(it->first);
			single.push_back(it->second);
			continue;
		}
		single.push_back(it->second);
	}
	it = comb.begin();
	for (; it != comb.end(); it++)
	{
		if (it != comb.begin())
			single.insert(std::lower_bound(single.begin(), single.end(), it->first), it->first);
	}
	if (odd != "ZEROO")
		single.insert(std::lower_bound(single.begin(), single.end(), std::atoi(odd.c_str())), std::atoi(odd.c_str()));
}

template<typename T>
void fordJonson(  T & comb )
{
	sort_each_pair(comb);
	mergeSort(comb, comb.size());
	if (typeid(T) == typeid(std::vector< std::pair < int, int > >))
		insertionSort(comb, sortedVector);
	else
		insertionSort(comb, sortedDeque);	
}
void PmergeMe::sort (  ){
	timeval vecA, vecB, deqA, deqB;
	double vecTime, deqTime;
	gettimeofday(&vecB, 0);
	fordJonson(this->aVector);
	gettimeofday(&vecA, 0);
	gettimeofday(&deqB, 0);
	fordJonson(this->aDeque);
	gettimeofday(&deqA, 0);
	std::cout << "After:	";
	printS(sortedVector);
	vecTime = double(vecA.tv_usec -  vecB.tv_usec) / 1000;
	deqTime = double(deqA.tv_usec -  deqB.tv_usec) / 1000;
	std::cout << "Time to process a range of " << sortedVector.size() << " elements with std::vector : " << std::setprecision(5) << vecTime << " us" << std::endl;
	std::cout << "Time to process a range of " << sortedDeque.size() << " elements with std::deque : " << std::setprecision(5) << deqTime << " us" << std::endl;
}