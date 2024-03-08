#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>
#include<vector>
#include <utility>
#include <sstream>
#include <cstdlib>
class PmergeMe {
	private:
		std::string odd;
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