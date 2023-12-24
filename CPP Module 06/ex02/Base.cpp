#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base(){}

static Base* aA(){
	return (new A());
}

static Base* aB(){
	return (new B());
}

static Base* aC(){
	return (new C());
}

Base * generate(void){
	Base* tmp = new A();
	uintptr_t i = reinterpret_cast <uintptr_t> ( tmp );
	 Base* (*p[18]) () = { &aA, &aB, &aC		\
						, &aA, &aC, &aB		\
						, &aB, &aA, &aC		\
						, &aB, &aC, &aA	\
						, &aC, &aA, &aB	\
						, &aC, &aB, &aA};
	std::cout << "HEYYYYYY " << i % 18 << std::endl;
	delete tmp;
	return (p[i % 18]());
}
void identify(Base* p){
	std::string what = "Base";
	if (dynamic_cast <A *> (p) != nullptr)
		what = "A";
	else if (dynamic_cast <B *> (p) != nullptr)
		what = "B";
	else if (dynamic_cast <C *> (p) != nullptr)
		what = "C";
	std::cout << "the actual type of the object pointed to by p is " + what << std::endl;
}
void identify(Base& p){
    try {
        A& base = dynamic_cast<A&>(p);
		std::cout << "the actual type of the object pointed to by p is A"<< std::endl;
		(void)base;
    } catch (const std::bad_cast& e) {
    }
    try {
        B& base = dynamic_cast<B&>(p);
		std::cout << "the actual type of the object pointed to by p is B"<< std::endl;
		(void)base;
    } catch (const std::bad_cast& e) {
    }
    try {
        C& base = dynamic_cast<C&>(p);
		std::cout << "the actual type of the object pointed to by p is C"<< std::endl;
		(void)base;
    } catch (const std::bad_cast& e) {
    }
}