#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <deque>

template < typename T, class container=std::deque < T > >
class MutantStack : public std::stack < T >
{
	public:
		MutantStack (  );
		MutantStack ( const MutantStack & aMutantStack );
		MutantStack & operator= ( const MutantStack & aMutantStack );
		~MutantStack (  );
		typedef typename container::iterator iterator;
		iterator begin();
        iterator end();

};
#include "MutantStack.tpp"
#endif