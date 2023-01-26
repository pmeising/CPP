/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:11:43 by pmeising          #+#    #+#             */
/*   Updated: 2023/01/26 18:36:17 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*Horde = new Zombie[N];
	int		i = 0;

	while (i < N)
	{
		Horde[i].setname(name);
		i++;
	}
	return (Horde);
}
