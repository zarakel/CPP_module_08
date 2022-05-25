#include "Base.hpp"

int main()
{
	int i = 2;
	int arr[] = {1, 2, 3, 4, 5, 6};
	std::vector<int> chichi (arr, arr + sizeof(arr) / sizeof(int));
	std::cout << *easyFind(chichi, i) << std::endl;
	std::list<int> baba (arr, arr + sizeof(arr) / sizeof(int));
	std::cout << *easyFind(baba, i) << std::endl;
}
