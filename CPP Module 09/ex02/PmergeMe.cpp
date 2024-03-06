#include "PmergeMe.hpp"

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
	return (*this);
}