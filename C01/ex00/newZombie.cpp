/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:20:36 by pmeising          #+#    #+#             */
/*   Updated: 2023/01/24 19:07:33 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie	*Zombie_ptr = new Zombie;

	Zombie_ptr->name = name;
	return (Zombie_ptr);
}
