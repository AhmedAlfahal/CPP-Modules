#include "RPN.hpp"

int operations();
int multi(  );
int devide(  );
int minus(  );
int plus(  );

bool globalError = true;
int (*opearationAction[4]) () = {&multi, &devide, &minus, &plus};
std::string operationsString[4] = {"*", "/", "-", "+"};
std::stack < std::string > aStack;

 bool isOperation( std::string & op )
{
	if (op == "/" || op == "*" || op == "+" || op == "-")
		return (true);
	else
		return (false);
}

static void opHelpHelper(int & num){
	if (aStack.empty())
		globalError = false;
	else if (isOperation(aStack.top()) == true)
		num = operations();
	else
	{
		num = std::atoi(aStack.top().c_str());
		aStack.pop();
	}
}

static void opHelper( int & first, int & second ){
	if (aStack.size() >= 2)
	{
		opHelpHelper(first);
		opHelpHelper(second);
	}
	else
		globalError = false;
}

int multi(  ){
	int first;
	int second;
	opHelper(first, second);
	return (first * second);
}

int devide(  ){
	int first;
	int second;
	opHelper(first, second);
	return ( second / first );
}

int minus(  ){
	int first;
	int second;
	opHelper(first, second);
	return ( second - first );
}

int plus(  ){
	int first;
	int second;
	opHelper(first, second);
	return (first + second);
}


int operations(){
	for (int i = 0; i < 4; i++)
		if (operationsString[i] == aStack.top())
		{
			if (!aStack.empty())
				aStack.pop();
			return (opearationAction[i]());
		}
	globalError = false;
	return (1);
}

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
	{
		if ( !check_word(word) )
			return (false);
		aStack.push(word);
	}
	return (true);
}

bool  RPN::calculate (){
	int result = operations();
	if (globalError == true)
		std::cout << result << std::endl;
	return (globalError);
}