#include "Span.hpp"

Span::Span( void )
{
	std::cout << "Constructor call" << std::endl;
	return ;
}

Span::Span( unsigned int N )
{
	std::cout << "Constructor call" << std::endl;
	index = 0;
	std::vector<int> arr(N);
	_arr = arr;
	return ;
}

Span::Span( Span const & )
{
	return ;
}

Span & Span::operator= ( Span const & cp )
{
	this->_arr = cp._arr;
	return *this;
}

void Span::addNumber( int y )
{
	int size = _arr.size();
	if (index < size)
	{
		_arr[index] = y;
		index++;
	}
	else
	{
		std::cout << "array full" << std::endl;
	}
}

int	Span::shortestSpan( void )
{
	try
	{	
		int y;
		y = 0;
		int temp = _arr[0] - _arr[1];
		if (temp < 0)
			temp *= -1;
		std::vector<int> cp;
		cp = _arr;
		for (int i = 0; i != index; i++)
		{
			while (y != index)
			{
				if (y == i)
					y++;
				if (y > index)
					break ;
				if (temp > _arr[i] - cp[y] && _arr[i] - cp[y] >= 0)
					temp = _arr[i] - cp[y];
				y++;
			}
			y = 0;
		}
		if (index <= 1)
		{
			throw not_enough_arguments();
		}
		return (temp);
	}
		catch (std::exception & e)
		{
			std::cout << e.what();
			return (-1);
		}
}

int	Span::longestSpan( void )
{
	try{
			int min = _arr[0];
			int max = _arr[0];

			for(int i = 1; i != index; i++)
			{
				if (min > _arr[i])
					min = _arr[i];
				if (max < _arr[i])
					max = _arr[i];
			}
			if (index <= 1)
			{
				throw not_enough_arguments();
			}
			return (max - min);
		}
			catch (std::exception & e)
			{
				std::cout << e.what();
				return (-1);
			}

}

void	Span::addLotNumber( void )
{
	int size = _arr.size();
	srand(time(0));
	for (int i = 0; i != 10; i++)
	{
		if (index < size)
		{
			addNumber(rand() % 500);
		}
		else
		{
			std::cout << "array if full" << std::endl;
			break;
		}	
	}
}

Span::~Span(void)
{
	std::cout << "Destructor call" << std::endl;
	return ;
}
