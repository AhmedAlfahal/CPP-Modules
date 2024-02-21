#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	MutantStack<int> g;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	g = mstack;
	MutantStack<int>::iterator it = g.begin();
	MutantStack<int>::iterator ite = g.end();
	++it;
	--it;
	std::cout << *it << std::endl;
		std::cout << "----------------------------------" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
		std::cout << "----------------------------------" << std::endl;
	std::stack<int> s(mstack);
	return 0;
}