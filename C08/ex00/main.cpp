/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:06:18 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/22 19:04:56 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(int argc, char	**argv)
{
	std::deque<int>		deque;
	{
		std::vector<int>	vector = {2, 1, 4, 3, 2, 3};
		
		
		std::cout << "############################## Let's check out the vector class ###########################\n";
		std::cout << B_BLUE << "Vector contains " << vector.size() << " values.\n" << DEFAULT;
		for (int i = 0; i < vector.size();i++)
		{
			std::cout << vector[i] << "\n";
			std::cout << "Address: " << &vector[i] << "\n";
		}
		std::cout << std::endl;
		if (argc < 2)
		{
			std::cout << B_BLUE << "\n\n###################### Printing vector at i and replacing with rand() #####################\n\n" << DEFAULT;
			for (int i = 0; i < vector.size(); i++)
			{
				std::cout << vector[i] << "\n";
				vector[i] = rand();
				std::cout << B_GREEN << vector[i] << DEFAULT << "\n";
			}
			std::cout << B_BLUE << "\n################### Adding one value with 'push_back' ###################\n" << DEFAULT;
			vector.push_back(1);
			for (int i = 0; i < vector.size(); i++)
				std::cout << vector[i] << "\n";
		}
		else
		{
			int i = atoi(argv[1]);
			try
			{
				::easyfind(vector, i);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << ": Value " << i << " not in vector. " << std::endl;
			}
		}
	}
	{
		std::list<int>		list = {2, 1, 4, 3, 2, 3};
		std::cout << B_BLUE << "\n\nList contains " << list.size() << " values." << DEFAULT;
		
		// that's how an iterator of a list is declared
		std::list<int>::iterator itr = list.begin();
		
		std::cout << std::endl;
		if (argc < 2)
		{
			std::cout << B_BLUE << "\n\n###################### Iterating through list replacing values with rand() #####################\n\n" << DEFAULT;
			for (itr; itr != list.end(); itr++) // itr++ is overloaded to walk to the next node of the list rather then increasing the memory address.
			{
				std::cout << *itr << "\n";
				*itr = rand();
				std::cout << B_GREEN << *itr << DEFAULT << "\n";
			}
			itr = list.begin();
			std::cout << B_BLUE << "\n################### Adding one value (1) with 'push_back' ###################\n\n" << DEFAULT;
			list.push_back(1);
			std::cout << B_BLUE << "\n################### Adding one value (12345) with 'push_front' ###################\n\n" << DEFAULT;			
			list.push_front(12345);
			for (itr; itr != list.end(); itr++)
				std::cout << *itr << "\n";
			std::cout << "Notice how the push front wasn't printed?\n";
			itr = list.begin();
			for (itr; itr != list.end(); itr++)
				std::cout << *itr << "\n";
		}
		else
		{
			int i = atoi(argv[1]);
			try
			{
				::easyfind(list, i);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << ": Value " << i << " not in list. " << std::endl;
			}
		}
	}
	
	return (0);
}
