#include "MutantStack.hpp"

int main()
{
	std::list<int> i;
	i.push_back(5);
	i.push_back(17);
	std::cout << i.back() << std::endl;
	i.pop_back();
	std::cout << i.size() << std::endl;
	i.push_back(3); i.push_back(5); i.push_back(737); //[...] mstack.push(0);
	std::list<int>::iterator it = i.begin(); std::list<int>::iterator ite = i.end();
	++it;
	--it;
	while (it != ite) 
	{
    	std::cout << *it << std::endl;
		++it; 
	}

	
	std::cout << "------------------------------------------" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
	MutantStack<int>::iterator itm = mstack.begin(); MutantStack<int>::iterator item = mstack.end();
	++itm;
	--itm;
	while (itm != item) 
	{
    	std::cout << *itm << std::endl;
		++itm; 
	}
	std::stack<int> sm(mstack); 
	return 0;
}
