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
		bool error;
		int operations();
		// int multi();
		// int devide();
		// int minus();
		// int plus();
		RPN (  );
		RPN ( const RPN & aRPN );
		RPN & operator= ( const RPN & aRPN );
		~RPN (  );
	public:
		static bool pars ( char **args );
		static bool  calculate ();
};

#endif