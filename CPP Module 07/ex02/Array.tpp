#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T> Array<T>::Array(){
	this->elements = new T[1];
	this->elements[0] = NULL;
}
template <typename T> Array<T>::Array ( unsigned int n ){
	this->elements = new T[n + 1];
	this->elements[n] = 0;
}
template <typename T> Array<T>::Array( Array & aArray ){
	*this = aArray;
}
template <typename T> 
Array<T> & Array<T>::operator= ( Array & aArray ){
}
template <typename T>
T & Array<T>::operator[] (int index){
	
}
template <typename T> 
int	Array<T>::size(){
	
}

Array<T>::~Array() {
	delete[] this->elements;
};
#endif