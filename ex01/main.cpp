#include "Span.hpp"

int main()
{
	Span c(400);
	c.addNumber(5);
	c.addNumber(45);
	c.addNumber(85);
	c.addNumber(125);



	std::cout << "Index = " << c.index << std::endl;
	for (int i = 0; i != c.index ; i++)
		std::cout << c._arr[i] << " ";
	std::cout << "taille du tableau = " << c._arr.size() << std::endl;
	std::cout << "min rang = " << c.shortestSpan() << std::endl;
	std::cout << std::endl;
}
