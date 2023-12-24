#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <stdint.h>

class Base {
	public:
		virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif