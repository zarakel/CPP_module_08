#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include <vector>
# include <list>
# include <stdexcept>
# include <exception>

struct Nofind : std::exception
{
	const char * what() const throw() {return "Nofind";}
};

template< typename T >
typename T::const_iterator easyFind(T const F, int const i)
{
		for (typename T::const_iterator zouave = F.begin() ; zouave != F.end(); zouave++)
		{
			if (*zouave == i)
				return (typename T::const_iterator(zouave));
		}
	throw (Nofind());
}

#endif
