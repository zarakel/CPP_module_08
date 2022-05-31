#include "Easyfind.hpp"

int main()
{
	int i = 2;
	int arr[] = {1, 2, 3, 4, 5, 6};
	std::vector<int> chichi (arr, arr + sizeof(arr) / sizeof(int));
	try {
		std::cout << *easyFind(chichi, 0) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	std::list<int> baba (arr, arr + sizeof(arr) / sizeof(int));
	try {
		std::cout << *easyFind(baba, i) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}
