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
	this->arraySize = 1;
}
template <typename T>
Array<T>::Array ( unsigned int n ){
	this->elements = new T[n + 1];
	for (unsigned int i = 0; i <= n; i++)	
		this->elements[i] = 0;
	this->arraySize = n;
}
template <typename T>
Array<T>::Array( const Array & aArray ){
	if (this == &aArray)
		return ;
	this->arraySize = aArray.size();
	this->elements = new T[aArray.size() + 1];
	for (int i = 0; i < this->size(); i++)
		this->elements[i] = aArray.elements[i];
	this->elements[this->size()] = 0;
}
template <typename T> 
Array<T> & Array<T>::operator= ( const Array & aArray ){
	if (this == &aArray)
		return (*this);
	std::cout << "am Here" << std::endl;
	this->arraySize = aArray.size();
	if (this->elements)
		delete [] this->elements;
	this->elements = new T[aArray.size() + 1];
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
	return (this->arraySize);
}

template <typename T>
Array<T>::~Array() {
	delete[] this->elements;
}
#endif