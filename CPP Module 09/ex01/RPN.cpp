#include "RPN.hpp"
#include <cctype>

RPN::RPN (  ){
}

RPN::RPN ( const RPN & aRPN ){
	if (this == &aRPN)
		return ;
	*this = aRPN;
}

RPN::~RPN (  ){
}

RPN & RPN::operator= ( const RPN & aRPN ){
	if (this == &aRPN)
		return (*this);
	this->rpn = aRPN.rpn;
	return (*this);
}

static void concat_all ( std::string & all, char **args)
{
	for ( int i = 0; args[i]; i++ )
		all = all + std::string(args[i]) + " " ;
}

static bool check_word ( std::string & word ) {
	static int wordCount;
	if (word.empty() || wordCount >= 10)
		return (false);
	if ( ( (word[0] == '/' || word[0] == '*') && word.length() == 1 ) )
		return (true);
	for ( unsigned int i = 0; i < word.length(); i++ )
	{
		if ( (( word[i] == '-' || word[i] == '+' ) && i == 0) )
			continue;
		if ( std::isdigit(word[i]) == 0 )
			return (false);
	}
	if (word == "-" || word == "+" || word == "*" || word == "/")
		wordCount++;
	return (true);
}

bool RPN::pars ( char **arg ){
	std::string all;
	std::string word;
	concat_all(all, arg + 1);
	std::istringstream l(all);
	while ( l >> word )
		if ( !check_word(word) )
			return (false);
	return (true);
}

int  RPN::calculate (){
	return (1);
}