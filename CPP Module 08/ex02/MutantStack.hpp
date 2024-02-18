#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template < typename T >
class MutantStack : public std::stack < T >
{

};

#endif