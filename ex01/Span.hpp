#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <vector>
# include <time.h>

struct not_enough_arguments : std::exception
{
	const char * what() const throw() {return "not enought argument";}
};

class Span
{
	public:
		Span ( void );
		Span ( unsigned int N);
		Span ( Span const & );
		Span & operator=( Span const & cp );
		~Span( void );
		void	addNumber( int y );
		void	addLotNumber( void );
		int		shortestSpan( void );
		int		longestSpan ( void );
		std::vector<int> _arr;
		int index;
};

#endif
