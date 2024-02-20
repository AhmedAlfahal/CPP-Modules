#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"
template < typename T, class container=std::deque < T > >
MutantStack< T>::MutantStack (  ) {

}

template < typename T, class container=std::deque < T > >
MutantStack< T >::MutantStack ( const MutantStack & aMutantStack ) {
	if (this == &aMutantStack)
		return (*this);
	*this = aMutantStack;
}

template < typename T, class container=std::deque < T > >
MutantStack & MutantStack<T>::operator= ( const MutantStack<T> & aMutantStack ) {
	if (this == &aMutantStack)
		return (*this);
	// this->c = aMutantStack.c;
}

template < typename T, class container=std::deque < T > >
MutantStack< T>::~MutantStack (  ) {

}

template < typename T, class container=std::deque < T > >
MutantStack< T>::iterator begin(){

}

template < typename T, class container=std::deque < T > >
MutantStack< T>::iterator end(){

}

#endif