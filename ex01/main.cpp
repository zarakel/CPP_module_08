#include "Span.hpp"

int main()
{
	Span c = Span(152);
	c.addNumber(5);
	c.addNumber(45);
	c.addNumber(85);
	c.addNumber(125);
	c.addLotNumber();

	std::cout << "Index = " << c.index << std::endl;
	for (int i = 0; i != c.index ; i++)
		std::cout << c._arr[i] << " ";
	std::cout << "taille du tableau = " << c._arr.size() << std::endl;
	std::cout << "min rang = " << c.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout << "max rang = " << c.longestSpan() << std::endl;
	std::cout << std::endl;
}
