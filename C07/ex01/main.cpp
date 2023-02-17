/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:54:45 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/17 19:22:50 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"

int	main()
{
	{
		int	array[90];

		for (int i = 0; i < 90; i++)
			array[i] = rand();
		::iter(array, 90, ::printing);
		std::cout << "Just the first 10: \n";
		::iter(array, 10, ::printing);
	}
	
	{
		std::string		array[90];
		
		for (int i = 0; i < 90; i++)
			array[i] = 'H';
		::iter(array, 90, ::printing);
	}
}
