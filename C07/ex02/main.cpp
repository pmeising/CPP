/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:14:03 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/17 17:36:37 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
// #include "Array.tpp"

#define MAX_VAL 750

int main(int, char**)
{
	{
		// Array<char*>	string;
		// Array<char*>	test(30);
		// Array<int>		numbers(MAX_VAL);

		// for (int i = 0; i < MAX_VAL; i++)
		// {
		// 	const int value = rand();
		// 	numbers[i] = value;
		// }
	}

	{
		std::cout << "\n##################################### Eval tests ######################################\n\n";
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		// SCOPE
		{
			Array<int> tmp = numbers;
			// Array<int> test(tmp);
		}
		delete[] mirror;
		// for (int i = 0; i < MAX_VAL; i++)
		// {
		// 	if (mirror[i] != numbers[i])
		// 	{
		// 		std::cerr << "didn't save the same value!!" << std::endl;
		// 		return 1;
		// 	}
		// }
		// try
		// {
		// 	numbers[-2] = 0;
		// }
		// catch(const std::exception& e)
		// {
		// 	std::cerr << e.what() << '\n';
		// }
		// try
		// {
		// 	numbers[MAX_VAL] = 0;
		// }
		// catch(const std::exception& e)
		// {
		// 	std::cerr << e.what() << '\n';
		// }

		// for (int i = 0; i < MAX_VAL; i++)
		// {
		// 	numbers[i] = rand();
		// }
		// delete [] mirror;
	}
}
