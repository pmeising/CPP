/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:29:16 by pmeising          #+#    #+#             */
/*   Updated: 2023/01/24 19:08:09 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	Zombie0; // However we do need an initial Zombie to be able to access the function .newZombie I believe.
	Zombie	*Zombies[5]; // Double-pointer to Zombie type array.
	int		i = 0;

	// newZombie("Carol");
	std::cout << B_BLUE << "Mallocing space for these ones inside the .newZombie function.\n" << DEFAULT;
	Zombies[0] = Zombie0.newZombie("Brad"); // Store pointer to first Zombie in [0].
	Zombies[1] = Zombie0.newZombie("Harry");
	Zombies[2] = Zombie0.newZombie("Mini");
	Zombies[3] = Zombie0.newZombie("Craspel");
	Zombies[4] = NULL;
	while (Zombies[i])
	{
		Zombies[i]->announce();
		std::cout << B_RED << "Deleting...\n" << DEFAULT;
		delete Zombies[i];
		i++;
	}
	i = 0;
	Zombie0.randomChump("Bills acquaintance");
	Zombie0.randomChump("Bills acquaintance1");
	Zombie0.randomChump("Bills acquaintance2");
	Zombie0.randomChump("Bills acquaintance3");
}
