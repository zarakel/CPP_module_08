#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include <vector>
# include <stdexcept>

struct Nofind : std::exception
{
	const char * what() const throw() {return "Nofind";}
};

template<typename T>
T easyFind(std::vector<T> F, int i)
{
	try {
		int size = F.size();
		for (int y = 0 ; y != size; y++)
		{
			if(F[y] == i)
				return (F[y]);
		}
		throw Nofind();
		}	
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

#endif
