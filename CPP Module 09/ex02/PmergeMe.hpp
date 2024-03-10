#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <sys/time.h>
#include <iomanip>

class PmergeMe {
	private:
		std::deque< std::pair< int, int > > aDeque;
		std::vector< std::pair< int, int> > aVector;
	public:
		PmergeMe();
		PmergeMe( const PmergeMe & aPmergeMe );
		PmergeMe & operator= ( const PmergeMe & aPmergeMe );
		~PmergeMe();
		bool pars ( char **args );
		void sort();

};

#endif