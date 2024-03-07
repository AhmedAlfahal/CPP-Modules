#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>
#include<list>
#include <utility>
#include <sstream>
class PmergeMe {
	private:
		std::deque< std::pair<int, int >> aDeque;
		std::list< std::pair<int, int> > aList;
		PmergeMe();
		PmergeMe( const PmergeMe & aPmergeMe );
		PmergeMe & operator= ( const PmergeMe & aPmergeMe );
		~PmergeMe();
	public:
		static bool pars ( char **args );

};

#endif