/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:06:18 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/22 23:06:45 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(int argc, char	**argv)
{
	std::deque<int>		deque;
	{
		std::vector<int>	vector = {2, 1, 4, 5, 2, 3, 6293};
		
		std::cout << "############################## Let's check out the vector class ###########################\n";
		std::cout << B_BLUE << "Vector contains " << vector.size() << " values.\n" << DEFAULT;
		for (int i = 0; i < vector.size();i++)
		{
			std::cout << vector[i] << "\n";
			std::cout << "Address: " << &vector[i] << "\n";
		}
		std::cout << B_GREEN << "\n########################### Notice how the addresses are contiguous #######################" << DEFAULT << std::endl;
		if (argc < 2)
		{
			std::cout << B_BLUE << "\n\n###################### Printing vector at i and replacing with rand() #####################\n" << DEFAULT;
			for (int i = 0; i < vector.size(); i++)
			{
				std::cout << vector[i] << "\n";
				vector[i] = rand();
				std::cout << B_GREEN << vector[i] << DEFAULT << "\n";
			}
			std::cout << B_BLUE << "################### Adding one value with 'push_back' ###################\n" << DEFAULT;
			vector.push_back(1);
			for (int i = 0; i < vector.size(); i++)
				std::cout << vector[i] << "\n";
			std::cout << "################# Let's sort 'em! ########################\n";
			std::sort(vector.begin(), vector.end());
			for (int i = 0; i < vector.size(); i++)
				std::cout << vector[i] << "\n";
			std::cout << "######################## What about reversing? #########################\n";
			std::reverse(vector.begin(), vector.end());
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
				std::cerr << B_RED << e.what() << ": Value " << i << " not in list. " << DEFAULT << std::endl;
			}
		}
	}
	{
		std::list<int>		list = {2, 1, 4, 3, 2, 3, 6293};
		std::cout << B_BLUE << "\nList contains " << list.size() << " values.\n" << DEFAULT;
		
		std::cout << B_GREEN << "############################## Let's check out the list class ###########################\n";
		std::cout << std::endl;
		// that's how an iterator of a list is declared
		std::list<int>::iterator itr = list.begin();
		for (itr; itr != list.end(); itr++) // itr++ is overloaded to walk to the next node of the list rather then increasing the memory address.
		{
			std::cout << *itr << "\n";
			std::cout << "Address: " << &itr << "\n";
		}
		std::cout << std::endl;
		if (argc < 2)
		{
			itr = list.begin();
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
			std::cout << B_BLUE << "\n################### Adding one value (12345) with 'push_front' ###################\n" << DEFAULT;			
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
				std::cerr << B_RED << e.what() << ": Value " << i << " not in list. " << DEFAULT << std::endl;
			}
		}
	}
	
	return (0);
}
