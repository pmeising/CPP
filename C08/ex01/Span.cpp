/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:21:30 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/22 23:39:38 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N), _vec(new std::vector<int>(N))
{
	std::cout << B_GREEN << "Constructor call.\nAllocating space for a vector pointer capable of holding " << N << " ints.\n" << DEFAULT;
}

Span::~Span()
{
	std::cout << B_RED << "Destructor call.\n" << DEFAULT;
	if (_vec)
		delete _vec;
}
