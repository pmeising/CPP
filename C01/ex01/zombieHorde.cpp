/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:11:43 by pmeising          #+#    #+#             */
/*   Updated: 2023/01/24 20:59:48 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*Horde = new Zombie[N];
	int		i = 0;

	while (i < N)
	{
		Horde[i].name = name;
		i++;
	}
	return (Horde);
}
