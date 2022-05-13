# ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <stack>
#include <list>
#include <iostream>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>( void )
		{
			std::cout << "Constuctor Called" << std::endl;
			return ;
		}
		MutantStack<T>( MutantStack const & )
		{
			return ;
		}
		MutantStack<T> & operator=( MutantStack const & cp)
		{
			*this = cp;
			return (* this );
		}

		typedef typename std::stack<T>::container_type::iterator iterator; 

		iterator	begin(void)
		{
			return (this->c.begin());
		}

		iterator	end(void)
		{
			return (this->c.end());
		}

		~MutantStack<T>( void )
		{
			std::cout << "Destructor Called" << std::endl;
			return ;	
		}
		int b;

};

#endif
