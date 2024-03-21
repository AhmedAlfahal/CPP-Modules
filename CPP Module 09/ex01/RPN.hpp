#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <list>
#include <sstream>
#include <cstdlib>

class RPN
{
	private:
		RPN (  );
		RPN ( const RPN & aRPN );
		RPN & operator= ( const RPN & aRPN );
		~RPN (  );
	public:
		static bool pars ( std::string all );
		static bool  calculate ();
};

#endif