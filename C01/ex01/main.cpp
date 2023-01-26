/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:28:54 by pmeising          #+#    #+#             */
/*   Updated: 2023/01/26 18:39:11 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int	main(int argc, char **argv)
{
	Zombie		*Zombie_ptr;
	int			i = 0;

	// Zombie::zombieHorde(1, "bill");
	if (argc == 3)
	{
		int			N = atoi(argv[1]);
		std::string	name = argv[2];
		Zombie_ptr = zombieHorde(N, name);
		while (i < N)
		{
			Zombie_ptr[i].announce();
			i++;
		}
		std::cout << B_GREEN << "Created " << i << " Zombies.\n" << B_BLUE;
		delete[] Zombie_ptr; // The [] make sure the entire array is being freed up.
	}
	return (0);
}

