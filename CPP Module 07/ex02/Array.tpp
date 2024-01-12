#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
const char *Array<T>::OutOfBoundaries::what() const throw(){
	return ("Array<T>::OutOfBoundaries");
}

template <typename T>
Array<T>::Array(){
	this->elements = new T[1];
	this->elements[0] = 0;
	this->arraySize = 0;
}
template <typename T>
Array<T>::Array ( unsigned int n ){
	this->elements = new T[n + 1];
	this->elements[n] = 0;
	this->arraySize = n;
}
template <typename T>
Array<T>::Array( const Array & aArray ){
	if (this == &aArray)
		return ;
	*this = aArray;
}
template <typename T> 
Array<T> & Array<T>::operator= ( const Array & aArray ){
	if (this == &aArray)
		return (*this);
	this->arraySize = aArray.size();
	this->elements = new T[this->size()];
	for (int i = 0; i < this->size(); i++)
		this->elements[i] = aArray.elements[i];
	return (*this);
}
template <typename T>
T & Array<T>::operator[] (int index){
	if (index < 0 || index >= this->size())
		throw (Array<T>::OutOfBoundaries());
	return (this->elements[index]);
}
template <typename T> 
int	Array<T>::size() const {
	return (arraySize);
}

template <typename T>
Array<T>::~Array() {
	delete[] this->elements;
}
#endif