/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:25:32 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/23 19:59:02 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	setrand(int &a)
{
	a = rand();
}

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span is: " << sp.shortestSpan() << "."<< std::endl;
		std::cout << "Longest span is: " << sp.longestSpan() << "." << std::endl;
	}
	{
		Span	sp(20000);
		Span	sp_2 = sp;
		sp.addNumber(3);
		std::cout << sp._vec[4] << "\n";
		std::cout << sp_2._vec[4] << "\n";
	}
	{
		Span	sp(10000);
		std::for_each(sp._vec.begin(), sp._vec.end(), setrand);
		// for(int i = 0; i < 10000; i++) // This will be very slow...
		// 	sp.addNumber(rand());
		std::cout << "Longest span: " << sp.longestSpan() << "\n";
		std::cout << "Shortest span: " << sp.shortestSpan() << "\n";
	}
	
	return 0;
}