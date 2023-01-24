/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:40:26 by pmeising          #+#    #+#             */
/*   Updated: 2023/01/24 22:16:07 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP
# define _HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# define DEFAULT "\033[0;39m"
# define B_RED "\033[1;31m"
# define B_BLUE "\033[1;94m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_PINK "\033[1;35m"

class	HumanB
{
public:
	void	setWeapon(Weapon Weapon);
	Weapon		Weapon;
	std::string	name;
};

#endif