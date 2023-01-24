/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:50:53 by pmeising          #+#    #+#             */
/*   Updated: 2023/01/24 22:10:29 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon Weapon)
{
	HumanA::name = name;
	HumanA::Weapon = Weapon;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << Weapon.getType() << std::endl;
}
