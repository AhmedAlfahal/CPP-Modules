#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>

class RPN
{
	private:
		std::stack < std::string > rpn;
		RPN (  );
		RPN ( const RPN & aRPN );
		RPN & operator= ( const RPN & aRPN );
		~RPN (  );
	public:
		static bool pars ( char **args );
		static int  calculate ();
};

#endif