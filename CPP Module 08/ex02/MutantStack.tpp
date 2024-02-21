#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T, class container>
MutantStack<T, container>::MutantStack() :std::stack < T, container> (){

}

template <typename T, class container>
MutantStack<T, container>::MutantStack(const MutantStack &aMutantStack) : std::stack < T, container > (aMutantStack)	{
    if (this == &aMutantStack)
		return ;
	*this = aMutantStack;
}

template <typename T, class container>
MutantStack<T, container> &MutantStack<T, container>::operator=(const MutantStack<T, container> &aMutantStack){
	if (this == &aMutantStack)
        return (*this);
	this->c = aMutantStack.c;
    return (*this);
}

template <typename T, class container>
MutantStack<T, container>::~MutantStack() {
}

template <typename T, class container>
typename MutantStack<T, container>::iterator MutantStack<T, container>::begin() {
    return (this->c.begin());
}

template <typename T, class container>
typename MutantStack<T, container>::iterator MutantStack<T, container>::end() {
    return (this->c.end());
}

#endif
