/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:21:30 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/23 15:46:05 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0), _vec(std::vector<int>(0))
{
	std::cout << B_GREEN << "Default constructor called.\n";
}

Span::Span(unsigned int N) : _size(N), _vec(std::vector<int>(N))
{
	std::cout << B_GREEN << "Constructor call.\nAllocating space for a vector pointer capable of holding " << N << " ints.\n" << DEFAULT;
	for(unsigned int i = 0; i < this->_size; i++)
		this->_vec[i] = 0;
}

Span::Span(const Span& obj) : _size(obj._size)
{
	std::cout << "Copy constructor called.\n";
	for (unsigned int i = 0; i < obj._size; i++)
		this->_vec[i] = obj._vec[i];
}

Span::~Span()
{
	std::cout << B_RED << "Destructor call.\n" << DEFAULT;
}

// ############################# Operator overloads ############################

Span&	Span::operator=(const Span& rhs)
{
	std::cout << "Copy constructor called.\n";
	for (unsigned int i = 0; i < rhs._size; i++)
		this->_vec[i] = rhs._vec[i];
	this->_size = rhs._size;
	return (*this);
}

// ############################### Member functions ################################

void	Span::addNumber(int nbr)
{
	int count = std::count(_vec.begin(), _vec.end(), 0);
	if (count > 0)
	{
		this->_vec[this->_size - count] = nbr;
	}
	else
	try
	{
		throw std::exception();
	}
	catch(const std::exception& e)
	{
		std::cerr << B_RED << e.what() << " Maximum storage reached.\n" << DEFAULT;
	}
}

// unsigned long	Span::shortestSpan()
// {
	
// }

unsigned long	Span::longestSpan()
{
	std::vector<int>::iterator	min = std::min_element(_vec.begin(), _vec.end());
	std::vector<int>::iterator	max = std::max_element(_vec.begin(), _vec.end());

	return (*max - *min);
}
