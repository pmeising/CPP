/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:40:26 by pmeising          #+#    #+#             */
/*   Updated: 2023/01/24 22:10:36 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP
# define _HUMANA_HPP
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

class	HumanA
{
public:
	HumanA(std::string name, Weapon Weapon);
	void	attack(void);
private:
	Weapon		Weapon;
	std::string	name;
};

#endif