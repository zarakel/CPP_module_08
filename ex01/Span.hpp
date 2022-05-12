#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <vector>

class Span
{
	public:
		Span ( void );
		Span ( unsigned int N);
		Span ( Span const & );
		Span & operator=( Span const & cp );
		~Span( void );
		void	addNumber( int y );
		int		shortestSpan( void );
		//int		longestSpan ( void );
		std::vector<int> _arr;
		int index;
};

#endif
